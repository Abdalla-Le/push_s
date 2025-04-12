/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:03:28 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 10:26:04 by lnovis-a         ###   ########.fr       */
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
		{
			free(str[i]);
			i++;
		}
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
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '-' || str[i] == '+')
    	{
        	if (!ft_isdigit(str[i + 1]))
            	return (0);
        	i++;
    	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int    verify_split(char **args)
{
    int    i;

    i = 0;
    while (args[i])
    {
        if (!args[i])
            return (1);
        i++;
    }
    return (0);
}

long ft_atoil(const char *nptr)
{
	int		sig;
	int		i;
	long	result;

	i = 0;
	sig = 1;
	result = 0;
	while (nptr[i] <= 32 && nptr[i])
		if (nptr[i++] == '\e')
			return (0);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig *= -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sig);
}
