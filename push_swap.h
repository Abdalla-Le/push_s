#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

// estrutura que tem o valor do no nó e um ponteiro parao proximo nó
typedef struct s_node
{
	int value;
	struct s_node *next;
} t_node;

// Estrutura que tem o topo da pilha e seu tamanho
typedef struct s_stack
{
	t_node *top;
	int size;
} t_stack;

void    push_swap(t_stack **a, t_stack **b);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);

#endif

