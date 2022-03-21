#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a; /* the value of a is assigned to a new value c*/
	*a = *b;
	*b = c;
}
