#include "monty.h"

void push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node;
       
	new_node = malloc(sizeof(stack_t));
	if (new_node = NULL)
		free(new_node);
	new_node-> = line_number;
	new_node->prev = NULL;
	new_node->next = *top;
	if (*top != NULL)
	{
		(*top)->prev = new_node;
	}
	*top = new_node;
}
