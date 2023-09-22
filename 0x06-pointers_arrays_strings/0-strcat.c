#include "main.h"
/**
 * _strcat - links two strings
 * @dest: destination of the string
 * @src: source string
 * Return: pointer to linked string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	{
		i++;
	}
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
