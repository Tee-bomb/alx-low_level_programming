#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: The string to convert
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
