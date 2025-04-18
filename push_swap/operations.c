/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:49:21 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 08:50:43 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	int	value;

	value = pop(*b);
	push(*a, value);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	int	value;

	value = pop(*a);
	push(*b, value);
	ft_printf("pb\n");
}
