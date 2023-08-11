#include "monty.h"
/**
 * pint - prints the top element of the stack
 *
 * @top: top element of stack
 * @line_number: current line number in monty file
 */
void pint(stack_t **top, unsigned int line_number)
{
	if (top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*top)->n);
}
