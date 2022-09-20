#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		a++;
	}
	putchar(10);
}
