#include "push_swap.h"

/*
Funcaomain
Validacao de arg
Inicializacao das
Chamada da funcao principal de ordenacao
*/

int main (int argc, char ** argv)
{
	t_stack	*a;
	t_node	*teste;

	if (argc < 2)
		return (1);

	a = parse_args(argc, argv);

	teste = a->top;
	while (teste->next != NULL)
	{
		ft_printf("%d\n", teste->value);
		teste = teste->next;
	}


	return 0;


}
