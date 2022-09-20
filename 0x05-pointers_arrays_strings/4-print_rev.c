#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: string bring printed in reverse
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
