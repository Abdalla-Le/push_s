#include "push_swap.h"



#include "push_swap.h"
#include <stdio.h>

int is_organized(t_stack *a)
{
	t_node *current;

	current = a->top;
    while (current->next)
    {
        if ((current->value) < (current->next->value))
            current = current->next;
		else
			return (0);
	}
	super_free(a);
	return(1);

}


int main (int argc, char **argv)
{
    t_stack *a;

    if (argc < 2)
        return(0);
    a = parse_args(argc, argv);
    if (is_organized(a))
        return(0);
    index_stack(a);

    return(0);

}
//int main (int argc, char ** argv)
//{
//	t_stack	*a;
//	t_node	*teste;
//
//	if (argc < 2)
//		return (1);
//	a = parse_args(argc, argv);
//	if (!a)
//	{
//        return (1);
//	}
//	teste = a->top;
//	while (teste != NULL)
//	{
//		ft_printf("%d\n", teste->value);
//		teste = teste->next;
//	}
//
//
//	return 0;
//
//}

