#include "monty.h"
/**
 * tokenizer - makes an array of tokens out of a string
 *
 * @line: monty file line input
 *
 * Return: token array or NULL if wrong input or malloc issue
 */
char **tokenizer(char *line)
{
	char *token_array[];
	int i = 0;
	char *dupline;

	token_array = malloc(sizeof(char *) * 3);
	if (token_array == NULL)
	{
		free(token_array);
		return (NULL);
	}
	dupline = strdup(line);
	token_array[0] = strtok(line, WHITESPACE);
	token_array[1] = strtok(NULL, WHITESPACE);
	token_array[2] = strtok(NULL, WHITESPACE);
	if (token_array[2] != NULL || token_array[1] == NULL)
		return (NULL);
	return (token_array);
}


/**
 * main - interprets monty files
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char **argv)
{
	FILE *fp;
	ssize_t num_chars = 0;
	size_t len = 100, line_count = 0;
	char *line;
	char **tokens;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line = malloc(len * sizeof(char));
	while (num_chars != -1)
	{
		line_count++;
		num_chars = getline(&line, &len, fp);
		tokens = tokenizer(line);
		get_monty_op(token[0], line_count);
	}
	fclose(fp);
	free(fp);
	free(tokens);
	return (0);
}
