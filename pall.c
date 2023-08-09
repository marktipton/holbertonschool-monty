#include "monty.h"

void pall(stack_t *top)
{
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
