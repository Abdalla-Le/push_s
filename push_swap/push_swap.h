#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "Printf/ft_printf.h"


// Estrutura para um nó da pilha
typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;

}   t_node;

// Estrutura para representar as pilhas
typedef struct s_stack
{
    t_node *top;
    int     size;
    int     *arr;// Para facilitar o Radix Sort
}   t_stack;

/* push_swap.c */
void    push_swap(t_stack *a, t_stack *b);
int is_organized(t_stack *a);


/* parser.c */
char    **parse_args1(int argc, char **argv);
void	parse_args2(int argc, char **args, t_stack *a);
int is_duplicate(t_stack *a, int num);
t_stack	*parse_args(int argc, char **argv);

/* stack_utils.c */
t_stack *stack_init(void);
void    push(t_stack *stack, int value);
int     pop(t_stack *stack);
void    free_stack(t_stack *stack);
void    print_stack(t_stack *stack); // (Debug)
void    swap(t_stack *stack);
void    rotate(t_stack *stack);
void    reverse_rotate(t_stack *stack);
void super_free(t_stack *stack);

/* operations.c */
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

/* indexing.c */
void    index_stack(t_stack *a);
void sort_array(int *arr, int size);
int *copy_stack_to_array(t_stack *stack);
void index_stack(t_stack *stack);


/* radix_sort.c */
void    radix_sort(t_stack *a, t_stack *b);
int find_max_bits(t_stack *a);
void distribute_by_bit(t_stack *a, t_stack *b, int bit_pos);
void collect_numbers_back(t_stack *a, t_stack *b);

/*utils*/
void    error(char **str, int argc, t_stack *a);
int     is_number(char *str);


#endif
