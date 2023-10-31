#include "main.h"

/**
 * print_arguments -pritns all arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: always 0 (0)
 */
void print_arguments(int argc, char *atgv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s/n", argv[i]);
	}
}
