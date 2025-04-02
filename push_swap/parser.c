#include "push_swap.h"
/*
Ler os argumentos da linha de comando
Verificar se sao numeros validos
Garantir que nao ha valores repetidos
Adicionar os numeros na pilha a
*/

//vou receber numeros como
// ./push_swap 1 2 3 4 ou ./push_swap "1 2 3 4"



int is_duplicate(t_stack *a, int num)
{
	t_node *current;

	current = a->top;
    while (current)
    {
        if (current->value == num)
            return (1);
        current = current->next;
    }
    return (0);
}

char **parse_args1(int argc, char **argv)
{
	int i;
	char **args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (0);
	}
	else
	{
		args = malloc(sizeof(char *) * argc);
		if (!args)
			return (0);
		i = 1;
		while(i < argc)
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
	int i;
	int num;

	i = 0;
	while (args[i]) // Conta até encontrar NULL
        i++;
	i--;
	while (i >= 0)
	{
		num = ft_atoi(args[i]);
		if (!is_number(args[i]))
		{
			error(args, argc, a);
		}

		if (is_duplicate(a, num))
		{
			error(args, argc, a);
		}
		push(a, num);
		i--;
	}
	free(args);
}
t_stack	*parse_args(int argc, char **argv)
{
	t_stack	*a;
	char	**args;

	a = stack_init();
	args = parse_args1(argc, argv);
	parse_args2(argc, args, a);
	return (a);
}


