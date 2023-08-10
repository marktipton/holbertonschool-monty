#include "monty.h"

void pall(stack_t **top, unsigned int line_number)
{
	(void)line_number;

	while ((*top) != NULL)
	{
		printf("%d\n", (*top)->n);
		*top = (*top)->next;
	}
}
