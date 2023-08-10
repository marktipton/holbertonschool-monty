#include "monty.h"
/**
 * main - interprets monty files
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 
 */
int main(int argc, char **argv)
{
	FILE* fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

}
