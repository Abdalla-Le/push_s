/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:10:00 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 10:42:05 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// criando uma pilha vazia
t_stack	*stack_init(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	stack->flag = 0;
	return (stack);
}

// criando nó
t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

// adicionando um novo nó no topo

void	push(t_stack *stack, int value)
{
	t_node	*node;

	node = new_node(value);
	if (!node)
		return ;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

// remove o topo da pilha e retorna o valor do topo removido
int	pop(t_stack *stack)
{
	int		value;
	t_node	*current;

	if (!stack->top)
		return (-1);
	current = stack->top;
	value = current->value;
	stack->top = current->next;
	free(current);
	stack->size--;
	return (value);
}
