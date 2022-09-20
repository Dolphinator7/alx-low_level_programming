#include "main.h"

/**
 * swap_int - swaps two integers values
 * @a: first integer
 * @b: second integer
 * return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
