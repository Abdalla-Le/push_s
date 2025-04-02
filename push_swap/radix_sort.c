#include "push_swap.h"

void radix_sort(t_stack *a, t_stack *b)
{
	int max_bits;
	int bit_pos;

    // Passo 1: Encontrar o maior numero na pilha
	max_bits = find_max_bits(a);
    // Passo 2: Iterar sobre cada bit
	bit_pos = 0;
	while (bit_pos < max_bits)
	{
        distribute_by_bit(a, b, bit_pos);
        collect_numbers_back(a, b);
        bit_pos++;
    }

}


int find_max_bits(t_stack *a)
{
	int max_value = 0;
	t_node *current = a->top;

	while (current)
	{
		if (current->index > max_value)
			max_value = current->index;
		current = current->next;
	}

	int bits = 0;
	while (max_value > 0)
	{
		max_value >>= 1;
		bits++;
	}
	return bits;

}

void distribute_by_bit(t_stack *a, t_stack *b, int bit_pos)
{
	int size = a->size;
	int bit_value;

	while (size > 0)
	{
		bit_value = (a->top->index >> bit_pos) & 1;

		if (bit_value == 0)
			pb(&a, &b);
		else
			ra(&a);
		size--;
	}
}


void collect_numbers_back(t_stack *a, t_stack *b)
{
	while (b->size > 0)
		pa(&a, &b);

}
