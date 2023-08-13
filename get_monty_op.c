#include "monty.h"

/**
 *get_monty_op - selects function to perform
 *
 *@s: operator passed as argument to program
 *
 *Return: operation or NULL
 */

void (*get_monty_op(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (inst[i].opcode != NULL && strcmp(inst[i].opcode, s) != 0)
	{
		i++;
	}
	printf("%s\n", inst[i].opcode);
	return (inst[i].f);
}
