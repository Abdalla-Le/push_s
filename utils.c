// funçoes basicas para criar as funções operacionais

#include "push_swap.h"

// criando uma pilha vazia
t_stack *stack_init(void)
{
	t_stack *stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}
// criando nó
t_node *new_node(int value)
{
	t_node *node = malloc(sizeof(t_node));
	if(!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
}

// adicionando um novo nó no topo

void push(t_stack *stack, int value)
{
	t_node *node = new_node(value);
	if (!node)
		return;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}
// remove o topo da pilha e retorna o valor do topo removido

int pop (t_stack *stack)
{
	if (!stack->top)
		return (0);
	t_node *temp = stack->top;
	int value = temp->value;
	stack->top = temp->next;
	free(temp);
	stack->size--;
	return(value);
}

// troca os dois primeiros elementos da pilha

void swap(t_stack *stack)
{
	if (!stack->top || !stack->top->next)
		return (0);
	t_node *first = stack->top;
	t_node *second = first->next;

	int temp = first->value;
	first->value = second->value;
	second->value = temp;
}

void rotate(t_stack *stack)
{
	if (!stack->top || !stack->top->next)
		return;

	t_node *first = stack->top;
	t_node *last = stack->top;

	// nesse while que eu acho a ultima
	while (last->next != NULL)
		last = last->next;

	stack->top = first->next;
	first->next = NULL;
	last->next = first;
}

void reverse_rotate(t_stack *stack)
{
	// se nao tiver pelo menos dois elementos?
	if (!stack->top || !stack->top->next)
		return;
	t_node
}
