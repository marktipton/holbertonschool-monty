#include "monty.h"

/**
 *get_monty_op - selects function to perform
 *
 *@s: operator passed as argument to program
 *
 *Return: operation or NULL
 */

void (*get_monty_op(char *s))(stack_t **, unsigned int)
{
	instruction_t instruction[] = {
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
	while (instruction[i].opcode != NULL && *(instruction[i].opcode) != *s)
	{
		i++;
	}
	return (instruction[i].f);
}
