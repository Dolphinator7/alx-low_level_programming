#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: input
 *
 * return: half the input
 */

void puts_half(char *str)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	str = (s[u] / 2);
	while (s[u] != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
