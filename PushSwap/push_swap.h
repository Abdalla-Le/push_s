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

// Funções de manipulação das pilhas
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void ra(t_stack **a);
void rb(t_stack **b);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);

// Funções auxiliares para as pilhas
t_stack *stack_init(void);
t_node *new_node(int value);
void push(t_stack *stack, int value);
int pop(t_stack *stack);
void swap(t_stack *stack);
void rotate(t_stack *stack);
void reverse_rotate(t_stack *stack);
void print_stack(t_stack *stack);

//Radix
void radix_sort(t_stack *stack);

#endif

