#include "monty.h"

void pint(stack_t *top, unsigned int line_number)
{
	if (top == NULL)
	{	
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%s\n", top);
}
