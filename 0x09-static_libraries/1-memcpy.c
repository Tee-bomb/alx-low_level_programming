#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where data is stored
 * @src: memory from where the data is copied
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
