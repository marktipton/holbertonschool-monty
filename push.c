#include "monty.h"
/**
 * _isdigit - finds if a character is a digit
 *
 * @c: char
 * Return: 0 if is digit and -1 if not digit
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
/**
 * is_integer - checks if token following push is an integer
 *
 * @arg: argument for push command
 *
 * Return: 0 if integer and -1 if not integer
 */
int is_integer(char *arg)
{
	size_t i = 0;

	if (arg == NULL || strlen(arg) == 0)
		return (-1);
	for (; i < strlen(arg); i++)
	{
		if (_isdigit(arg[i]) == -1)
			return (-1);
	}
	return (0);
}
int push_arg;
/**
 * check_line - handles extra argument input for push
 *
 * @line: monty file line input
 * @top: top node in stack
 * @line_number: current line number in monty file
 * Return: token array or NULL if wrong input or malloc issue
 */
char *check_line(char *line, stack_t **top, unsigned int line_number)
{
	char *op_code, *arg;

	(void)top;

	op_code = strtok(line, WHITESPACE);
	if (op_code == NULL)
		return (NULL);
	if (strcmp(op_code, "push") == 0)
	{
		arg = strtok(NULL, WHITESPACE);
		if (is_integer(arg) == 0 && arg != NULL)
		{
			push_arg = atoi(arg);
		}
		else
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	return (op_code);
}

/**
 * push - adds a new element to the top of the stack
 *
 * @top: top node of stack
 * @line_number: current line number of monty file
 *
 */
void push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node;

	(void)line_number;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		free(new_node);
	new_node->n = push_arg;
	new_node->next = *top;
	new_node->prev = NULL;

	if ((*top) != NULL)
	{
		(*top)->prev = new_node;
	}
	(*top) = new_node;
}
