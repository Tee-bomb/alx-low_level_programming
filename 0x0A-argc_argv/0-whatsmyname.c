#include <stdio>
#include "main.h"

/**
 * print_program_name - print the name
 * @argv: array of arguments
 * Return:
 * Always 0 (success)
 */
int print_program_name(char *argv[])
{
	print("%s\n", *argv);
	return (0);
}
