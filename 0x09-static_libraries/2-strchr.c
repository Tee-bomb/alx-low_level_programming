#include "main.h"

/**
 * _strchr - locate character in string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: pointer to first occurrence of `c` in `s`, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
