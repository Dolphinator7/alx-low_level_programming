#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Descriptiom: prints a string
 * on success: returns no eror
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	g}
	putchar(10);
}
