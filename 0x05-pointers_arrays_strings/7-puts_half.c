#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input
 *
 * return: half the input
 */

void puts_half(char *str)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	str = (s[len] / 2);
	while (s[len] != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
