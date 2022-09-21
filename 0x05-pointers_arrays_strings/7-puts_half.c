#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: string being tested
 *
 * return: the len of str
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] / 2 != '\0')
	{
		len++
	}
	return (len);
}
