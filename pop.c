#include "monty.h"
/**
 * pop - deletes the top element of the stack
 *
 * @top: top element in stack
 * @line_number: current line number in monty file
 */
void pop(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	if ((*top) == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	*top = (*top)->next;
	if ((*top) != NULL)
		(*top)->prev = NULL;
	free(temp);
}
