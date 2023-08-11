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
 * @push_arg: argument for push command
 *
 * Return: 0 if integer and -1 if not integer
 */
int is_integer(char *push_arg)
{
	int i = 0;

	if (str == NULL || strlen(str) == 0)
		return (-1);
	for (; i < strlen(str); i++)
	{
		if (_isdigit(str[i]) == -1)
			return (-1);
	}
	return (0);
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

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		free(new_node);

	new_node->n = line_number;
	new_node->next = *top;
	new_node->prev = NULL;

	if ((*top) != NULL)
	{
		(*top)->prev = new_node;
	}
	(*top) = new_node;
}
