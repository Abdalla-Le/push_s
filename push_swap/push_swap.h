#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "Printf/ft_printf.h"


// Estrutura para um nó da pilha
typedef struct s_node
{
    int             value;
    int             index; // Para facilitar o Radix Sort
    struct s_node   *next;
}   t_node;

// Estrutura para representar as pilhas
typedef struct s_stack
{
    t_node *top;
    int     size;
}   t_stack;

/* push_swap.c */
void    push_swap(t_stack *a, t_stack *b);

/* parser.c */
int     parse_args(int argc, char **argv, t_stack *a);
int     is_valid_number(char *str);
int     has_duplicates(t_stack *a);

/* stack_utils.c */
t_stack *init_stack(void);
void    push(t_stack *stack, int value);
int     pop(t_stack *stack);
void    free_stack(t_stack *stack);
void    print_stack(t_stack *stack); // (Debug)

/* operations.c */
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    rrr(t_stack *a, t_stack *b);

/* indexing.c */
void    index_stack(t_stack *a);

/* radix_sort.c */
void    radix_sort(t_stack *a, t_stack *b);

#endif
