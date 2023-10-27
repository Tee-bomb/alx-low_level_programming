#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (int i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
