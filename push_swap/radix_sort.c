/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:18:27 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 09:20:32 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	bit_pos;

	max_bits = find_max_bits(a);
	bit_pos = 0;
	while (bit_pos < max_bits)
	{
		distribute_by_bit(a, b, bit_pos);
		collect_numbers_back(a, b);
		bit_pos++;
	}
}

int	find_max_bits(t_stack *a)
{
	int	size;
	int	bits;

	size = a->size;
	size -= 1;
	bits = 0;
	while (size > 0)
	{
		size >>= 1;
		bits++;
	}
	return (bits);
}

void	distribute_by_bit(t_stack *a, t_stack *b, int bit_pos)
{
	int	size;
	int	bit_value;
	int	num;
	int	i;

	size = a->size;
	i = 0;
	while (size > 0)
	{
		num = a->top->value;
		if (a->arr[i] == num)
		{
			bit_value = (i >> bit_pos) & 1;
			if (bit_value == 0)
				pb(&a, &b);
			else
				ra(&a);
			i = 0;
			size--;
		}
		else
			i++;
	}
}

void	collect_numbers_back(t_stack *a, t_stack *b)
{
	while (b->size > 0)
		pa(&a, &b);
}
