/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:15:49 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 10:52:15 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// troca os dois primeiros elementos da pilha
void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	int		temp;

	if (!stack->top || !stack->top->next)
		return ;
	first = stack->top;
	second = first->next;
	temp = first->value;
	first->value = second->value;
	second->value = temp;
}

void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack->top || !stack->top->next)
		return ;
	first = stack->top;
	last = stack->top;
	while (last->next != NULL)
		last = last->next;
	stack->top = first->next;
	first->next = NULL;
	last->next = first;
}

void	reverse_rotate(t_stack *stack)
{
	t_node	*prev;
	t_node	*first;
	t_node	*last;

	if (!stack->top || !stack->top->next)
		return ;
	prev = NULL;
	first = stack->top;
	last = stack->top;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	stack->top = last;
	prev->next = NULL;
	last->next = first;
}

void	super_free(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
	free(stack->arr);
	free(stack);
}

void	super_mini_free(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
