/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:57:17 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 08:59:16 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_organized(t_stack *a)
{
	t_node	*current;

	current = a->top;
	while (current->next)
	{
		if ((current->value) < (current->next->value))
			current = current->next;
		else
			return (0);
	}
	super_free(a);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	if (is_organized(a))
		return (0);
	index_stack(a);
	b = stack_init();
	if (a->size > 5)
		radix_sort(a, b);
	else
		mini_radix(a, b);
	return (0);
}

/*
	t_node	*teste;
    teste = a->top;
    while (teste != NULL)
    {
    	ft_printf("%d\n", teste->value);
    	teste = teste->next;
    }
*/
