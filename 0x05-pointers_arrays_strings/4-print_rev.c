#include "main.h"
/**
 * print_rev - print and reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longe = 0;
	int n;

	while (*s != '\0')
	{
		longe++;
		s++;
	}
	s--;
	while (longe > 0)
	{
		putchar(*s);
		s--;
		longe--;
	}
	putchar('\n');
}
