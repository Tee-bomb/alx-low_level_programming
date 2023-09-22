#include "main.h"

/**
 * _strncat - links two strings using at most n bytes
 * @dest: destination of string
 * @src: source string
 * @n: maximum number of bytes to link
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
