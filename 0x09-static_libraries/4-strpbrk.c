#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The string to be scanned
 * @accept: The string containing the characters to search for
 *
 * Return: pointer first occurrence in `s` of any character from `accept`,
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (NULL);
}
