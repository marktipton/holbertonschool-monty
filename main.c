#include "monty.h"
/**
 * main - interprets monty files
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on failure
 */
int main(int argc, char **argv)
{
	FILE* fp;
	ssize_t num_chars = 0;
	size_t len = 100, line_count;
	char *line, *token1, *token2;

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
		num_chars = getline(&line, &len, fp);
		token1 = strtok(line, WHITESPACE);
		get_monty_op(token);
	}
	fclose(fp);
	free(fp);
	return (0);
}
