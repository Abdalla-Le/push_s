#include "push_swap.h"

void	radix_sort(t_stack *stack)
{
	int max;
	int bits;
	int i = 0;

	max = get_max(stack);
	bits = count_bits(max);
	while (i < bits)
	{
		t_stack b = {NULL};0
		t_node *current = stack->top;
		while (current)
		{
			int bit = (current->value >> i) & 1;
			if (bit == 0)
				push(&b, current->value);
			else
				push_to_bottom(stack, current->value);
			current = current->next;
		}

		while (b.top)
		{
			push(stack, b.top->value);
			pop(&b);
		}
		i++;
	}
}
