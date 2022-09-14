#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 *
 * Program to print _putchar
 * followed by new line
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);
}
