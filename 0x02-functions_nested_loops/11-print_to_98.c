#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98.
 * followed by a new line
 * @n: start from this number
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
