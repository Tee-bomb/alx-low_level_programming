#include "main.h"
/**
 * swap_int - swaps the two interger values
 * @a; integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
