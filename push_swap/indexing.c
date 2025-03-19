#include "push_swap.h"

void sort_array(int *arr, int size)
{
	int i, j, temp;

	i = 0;
	while(i < (size - 1))
	{
		j = 0;
		while(j < (size - 1))
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int *copy_stack_to_array(t_stack *stack)
{
	int *arr = malloc(sizeof(int) * stack->size);
	if (!arr)
		return NULL;

	t_node *current = stack->top;
	int i = 0;
	while (current)
	{
		arr[i++] = current->value;
		current = current->next;
	}
	return arr;
}

void index_stack(t_stack *stack)
{
	int *arr = copy_stack_to_array(stack);
	if (!arr)
		return;

	sort_array(arr, stack->size);

	t_node *current = stack->top;
	while (current)
	{
		int i = 0;
		while (i < stack->size)
		{
			if (current->value == arr[i])
			{
				current->value = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
	free(arr);
}
