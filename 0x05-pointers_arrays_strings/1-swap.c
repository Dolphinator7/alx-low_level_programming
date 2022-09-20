#include "main.h"

/**
 * function that swaps the values of two integers
 * @a: first integer
 * @b: second intrger
 * return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
