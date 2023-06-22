#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Stack head.
 * @counter: Line number.
 * Return: No return.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current, *last_node;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	last_node = current;
	last_node->next = *head;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	(*head)->prev = last_node;
	*head = last_node;
}

