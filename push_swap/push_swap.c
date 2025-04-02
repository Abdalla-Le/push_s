#include "push_swap.h"



#include "push_swap.h"
#include <stdio.h>
/*
int main(int argc, char **argv)
{
    printf("Iniciando push_swap...\n");

    t_stack *a;
    t_node *teste;

    if (argc < 2)
        return (1);

    printf("Chamando parse_args...\n");
    a = parse_args(argc, argv);
    if (!a)
    {
        printf("Erro ao processar argumentos!\n");
        return (1);
    }

    printf("Imprimindo valores...\n");
    teste = a->top;
    while (teste)
    {
        printf("%d\n", teste->value);
        teste = teste->next;
    }

    printf("Finalizando push_swap...\n");
    return 0;
}
*/


int main (int argc, char ** argv)
{
	t_stack	*a;
	t_node	*teste;

	if (argc < 2)
		return (1);
	a = parse_args(argc, argv);
	if (!a)
	{
    	ft_printf("Erro: parse_args retornou NULL\n");
    	return (1);
	}
	teste = a->top;
	while (teste->next != NULL)
	{
		ft_printf("%d\n", teste->value);
		teste = teste->next;
	}


	return 0;

}
