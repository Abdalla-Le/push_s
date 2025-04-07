/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:21:00 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 09:23:57 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*copy_stack_to_array(t_stack *stack)
{
	int		*arr;
	t_node	*current;
	int		i;

	arr = malloc(sizeof(int) * stack->size);
	if (!arr)
		return (NULL);
	current = stack->top;
	i = 0;
	while (current)
	{
		arr[i] = current->value;
		current = current->next;
		i++;
	}
	return (arr);
}

void	index_stack(t_stack *stack)
{
	int	*arr;

	arr = copy_stack_to_array(stack);
	if (!arr)
		return ;
	sort_array(arr, stack->size);
	stack->arr = arr;
}
