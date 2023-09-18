#include "main.h"
/**
 * puts2 - function should print one character
 * starts with the first one
 * @str: input
 * Return: print
 */
void  puts2(char *str)
{
	int longe = 0;

	while (str[length] != '\0')
	{
		longe++;
	}
	for (int i = 0; i < longe; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
