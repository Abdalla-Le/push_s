/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:24:23 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 09:24:24 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_node *top)
{
	t_node	*node;
	int		num;

	if (!top)
		return (0);
	node = top;
	num = node->value;
	while (node)
	{
		if (num > node->value)
			num = node->value;
		node = node->next;
	}
	return (num);
}

void	mini_radix(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	if (a->size == 3)
		radix_3(a);
	if (a->size == 4)
		radix_4(a, b);
	if (a->size == 5)
		radix_5(a, b);
}

void	radix_3(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first < second && second > third && first < third)
	{
		sa(a);
		ra(&a);
	}
	else if (first < second && second > third && first > third)
		rra(&a);
	else if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third && first > third)
	{
		sa(a);
		rra(&a);
	}
	else if (first > second && second < third && third < first)
		ra(&a);
}

void	radix_4(t_stack *a, t_stack *b)
{
	int		min;
	int		i;
	t_node	*node;

	min = find_min(a->top);
	node = a->top;
	i = 0;
	while (node && node->value != min)
	{
		node = node->next;
		i++;
	}
	if (i > a->size / 2)
		while (a->top->value != min)
			rra(&a);
	else
		while (a->top->value != min)
			ra(&a);
	pb(&a, &b);
	radix_3(a);
	pa(&a, &b);
}

void	radix_5(t_stack *a, t_stack *b)
{
	int		min;
	int		i;
	t_node	*node;

	min = find_min(a->top);
	node = a->top;
	i = 0;
	while (node && node->value != min)
	{
		node = node->next;
		i++;
	}
	if (i > a->size / 2)
		while (a->top->value != min)
			rra(&a);
	else
		while (a->top->value != min)
			ra(&a);
	pb(&a, &b);
	radix_4(a, b);
	pa(&a, &b);
}
