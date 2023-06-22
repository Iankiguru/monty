#include "monty.h"

/**
 * f_sub - Subtraction operation.
 * @head: Stack head.
 * @counter: Line number.
 * Return: No return.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int result, node_count;

	current = *head;
	for (node_count = 0; current != NULL; node_count++)
		current = current->next;

	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->next->n - current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}

