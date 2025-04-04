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
	return (node);
}

// adicionando um novo nó no topo

void push(t_stack *stack, int value)
{
	// ao inez de usar a pop fazer uma mudança de endereço ente o a e o b 
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
	int value;
	t_node *current;
	if (!stack->top)
		return (-1);

	current = stack->top;
	value = current->value;
	stack->top = current->next;
	free(current);
	stack->size--;
	return(value);
}

// troca os dois primeiros elementos da pilha

void swap(t_stack *stack)
{
	if (!stack->top || !stack->top->next)
		return ;
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
	if (!stack->top || !stack->top->next)
		return;

	t_node *prev = NULL;
	t_node *first = stack->top;
	t_node *last = stack->top;

	// nesse while que eu acho a ultima
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}

	stack->top = last;
	prev->next = NULL;
	last->next = first;
}

void super_free(t_stack *stack)
{
	t_node *current;
	t_node *next;
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}
