#include "main.h"

/**
 * count_arguments - print num of arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int counit_arguments(int argc, char *argv[])

{
	(void)argv; /* ignore argv */
	printf("%d/n", argc - 1);
	return (0);
}
