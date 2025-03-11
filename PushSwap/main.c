#include "push_swap.h"
#include <stdio.h>

void print_stack(t_stack *stack)
{
    t_node *current = stack->top;
    printf("Pilha: ");
    while (current)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}
/*
int main()
{
    t_stack *a = stack_init();
    t_stack *b = stack_init();

    // Populando a pilha 'a'
    push(a, 5);
    push(a, 4);
    push(a, 3);
    push(a, 2);
    push(a, 1);

    printf("🔹 Pilha inicial A:\n");
    print_stack(a);

    // Testando as operações
    sa(a); // Troca os dois primeiros elementos de A
    print_stack(a);

    sb(b); // Tenta trocar elementos de B (que está vazio)
    print_stack(b);

    ss(a, b); // Troca as duas pilhas A e B
    print_stack(a);
    print_stack(b);

    // Testando push para A e B
    pb(&a, &b); // Move um valor de A para B
    print_stack(a);
    print_stack(b);

    pa(&a, &b); // Move um valor de B para A
    print_stack(a);
    print_stack(b);

    // Testando rotate e reverse_rotate
    ra(&a); // Rotaciona A
    print_stack(a);
    rb(&b); // Rotaciona B
    print_stack(b);

    rra(&a); // Reverse rotate A
    print_stack(a);
    rrb(&b); // Reverse rotate B
    print_stack(b);

    // Testando rrr
    rrr(&a, &b); // Reverse rotate em ambas
    print_stack(a);
    print_stack(b);

    return 0;
}
*/

int main (int argc, char **argv)
{
    t_stack *stack = NULL;
    if (argc < 2)
        ft_printf("Nenhum número fornecido!");
        return (1);
    int i = 1;
    while (i < argc)
    {
        int num = atoi(argv[i]);
        push(&stack, num);
        i++;
    }
    ft_printf("Pilha inicial:\n");
    print_stack(&stack);
// ate aqui colocamos dentro de uma pilha os numeros fornecidos 
}
