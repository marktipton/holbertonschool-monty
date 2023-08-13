#include "monty.h"
/**
 * pall - prints all the elements in the stack
 *
 * @top: top element of stack
 * @line_number: current line number in monty file
 */
void pall(stack_t **top, unsigned int line_number)
{
	stack_t *traverse;
	(void)line_number;

	traverse = *top;

	while (traverse != NULL)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
	}
}
