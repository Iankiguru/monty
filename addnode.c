#include "monty.h"

/**
 * add_node - Adds a new node to the head of the stack.
 * @head: Pointer to the head of the stack
 * @new_value: Value to be added to the new node
 * Return: No return value
 */
void add_node(stack_t **head, int new_value)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: Unable to allocate memory for new node\n");
		exit(EXIT_FAILURE);
	}

	if (temp != NULL)
		temp->prev = new_node;

	new_node->n = new_value;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

