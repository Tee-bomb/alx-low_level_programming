#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: Character to print out
 * Return: if successful 1.
 * If error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
