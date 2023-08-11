#include "monty.h"
/**
 * pall - prints all the elements in the stack
 *
 * @top: top element of stack
 * @line_number: current line number in monty file
 */
void pall(stack_t **top, unsigned int line_number)
{
	(void)line_number;

	while ((*top) != NULL)
	{
		printf("%d\n", (*top)->n);
		*top = (*top)->next;
	}
}
