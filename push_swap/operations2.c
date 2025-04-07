/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:51:01 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 08:51:02 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	rotate(*a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(*b);
	ft_printf("rb\n");
}

void	rra(t_stack **a)
{
	reverse_rotate(*a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(*b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(*a);
	reverse_rotate(*b);
	ft_printf("rrr\n");
}
