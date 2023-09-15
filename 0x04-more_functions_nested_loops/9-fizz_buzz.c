#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100, new line to follow
 * but for multiples of three print Fizz instead
 * multiple of five print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			if (i != 1)
				printf(" ");
			printf("Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
		if (i != 1)
			printf(" ");
		printf("Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
		if (i != 1)
			printf(" ");
		printf("FizzBuzz");
	}
	else
	{
		if (i != 1)
			printf(" ");
		printf("%d", i);
	}
	}
	printf("\n");

	return (0);
}
