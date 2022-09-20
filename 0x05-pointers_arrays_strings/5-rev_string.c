#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string being reversed
 *
 */

void rev_string(char *s)
{
	int i, x, y, c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
