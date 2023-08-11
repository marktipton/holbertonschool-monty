#include "monty.h"

/**
 * free_stack_t - frees a dlistint_t list
 *
 * @head: head node
 */
void free_stack_t(stack_t *head)
{
	stack_t *current;
	stack_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;

	}
}
