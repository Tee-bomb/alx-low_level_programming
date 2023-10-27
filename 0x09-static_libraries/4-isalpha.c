#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: the characher to be checked
 *
 * Return: 1 if 'c' is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
