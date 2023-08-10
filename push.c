#include "monty.h"
/**
 * _isdigit - finds if a character is a digit
 *
 * @c: char
 * Return: 1 if char is not digit and 0 if is digit
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
/**
 * push - adds a new element to the top of the stack
 *
 * @top: top node of stack: line number of monty file
 * @line_number: line number of monty file
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
