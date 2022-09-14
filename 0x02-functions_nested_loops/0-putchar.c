#include <unistd.h>

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
	char ch[8] = "_putchar";
		int i = 0;
		char c;

		while (i <= 8)
		{
			c = ch[i};
			_putchar(c);
			i++;
		}

	_putchar('\n');

	return (0);
}
