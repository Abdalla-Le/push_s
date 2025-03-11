#include "push_swap.h"


int max_bits(t_stack *stack)
{
	int max = 0;
	int bits = 0;
	t_node *current = stack->top;

	while (current)
	{
		if (current->value > max)
			max = current->value;
		current = current->next;
	}

	while ((max >> bits) != 0)
		bits++;

	return bits;
}


void	sa(t_stack *a)
{
		swap(a);
		ft_printf("sa\n");
}

void	sb(t_stack *b)
{
		swap(b);
		ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	int value;
	value  = pop(b);
	push(a, value);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	int value;
	value  = pop(a);
	push(b, value);
	ft_printf("pb\n");

}

void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
