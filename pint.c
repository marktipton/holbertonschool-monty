#include "monty.h"

void pint(struct_t *top, int line_number)
{
	if (top == NULL)
	{	
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%s\n", top);
}
