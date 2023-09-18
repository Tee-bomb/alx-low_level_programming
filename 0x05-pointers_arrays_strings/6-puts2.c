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
	int t = 0;
	char *y = str;

	int 0;

	while (*y != '\0')
	{
		y++;
		longe++;
	}
	t = longe - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
