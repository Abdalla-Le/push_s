/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:03:28 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 09:04:42 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char **str, int argc, t_stack *a)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (str[i])
			free(str[i]);
		i++;
		free(str);
	}
	else
		free(str);
	free(a);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
