#include "push_swap.h"

int validate_number(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return 0;


	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}

	return (1);
}
int is_duplicate(t_stack *stack, int num)
{
	t_stack *current = stack;

	while (current != NULL)
	{
		if (current->value == num)
			return 1;
		current = current->next;
	}
	return 0;
}
