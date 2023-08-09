#include "monty.h"

void pop(struct_t *top, int line_number)
{
	struct_t *temp;

	if (top == NULL)
	{	
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = top;
	top = top->next;
	if (top != NULL)
		top->prev = NULL;
	free(temp);
}