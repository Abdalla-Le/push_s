#include "push_swap.h"
/*
Ler os argumentos da linha de comando
Verificar se sao numeros validos
Garantir que nao ha valores repetidos
Adicionar os numeros na pilha a
*/

//vou receber numeros como
// ./push_swap 1 2 3 4 ou ./push_swap "1 2 3 4"

char **parse_args(int argc, char **argv)
{
	char **args;
	int i;

	if (argc == 2)
	{
		args = split_args(argc, argv);
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
int parse_args2(char **args, t_stack *a)
{
	int i;
	int num;

	i = 0;
	while (args[i])
	{
		if (!validate_number(args[i]))
		{
			free(args);
			return (0);
		}
		num = ft_atoi(args[i]);
		if (is_duplicate(a, num))
		{
			free(args);
			return (0);
		}
		push_to_stack(a, num);
		i++;
	}
	free(args);
	return (1);
}
