#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Stack head.
 * @counter: Line number.
 * Return: No return.
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current = *head, *next_node, *last_node;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	next_node = (*head)->next;
	next_node->prev = NULL;

	while (current->next != NULL)
	{
		current = current->next;
	}

	last_node = current;
	last_node->next = *head;
	(*head)->next = NULL;
	(*head)->prev = last_node;
	*head = next_node;
}

