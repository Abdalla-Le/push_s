/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:51:23 by lnovis-a          #+#    #+#             */
/*   Updated: 2025/04/07 10:52:41 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_free(char **args, t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->flag == 1)
	{
		while (args[i])
		{
			free(args[i]);
			i++;
		}
	}
	free(args);
}

int	is_duplicate(t_stack *a, int num)
{
	t_node	*current;

	current = a->top;
	while (current)
	{
		if (current->value == num)
			return (1);
		current = current->next;
	}
	return (0);
}

char	**parse_args1(int argc, char **argv, t_stack *a)
{
	int		i;
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args || !args[0] || verify_split(args))
			error(args, argc ,a);
		a->flag = 1;
	}
	else
	{
		args = malloc(sizeof(char *) * argc);
		if (!args)
			return (0);
		i = 1;
		while (i < argc)
		{
			args[i - 1] = argv[i];
			i++;
		}
		args[i - 1] = NULL;
	}
	return (args);
}

void	parse_args2(int argc, char **args, t_stack *a)
{
	int		i;
	long	num;

	i = 0;
	while (args[i])
		i++;
	i--;
	while (i >= 0)
	{
		num = ft_atoil(args[i]);
        if (!is_number(args[i]) || num > 2147483647 || num < -2147483648)
        {
            super_mini_free(a);
            error(args, argc, a);
        }
        if (is_duplicate(a, num))
        {
            super_mini_free(a);
            error(args, argc, a);
        }
        push(a, (int)num);
        i--;
	}
	which_free(args, a);
}

t_stack	*parse_args(int argc, char **argv)
{
	t_stack	*a;
	char	**args;

	a = stack_init();
	args = parse_args1(argc, argv, a);
	parse_args2(argc, args, a);
	return (a);
}
