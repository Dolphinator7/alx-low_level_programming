#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int c, d, e;

	for (c = 0; c <= 9; c++)
	{
		for (d = 1; d <= 9; d++)
		{
			for (e = 2; e <= 9; e++)
			{
			if (e > d && d > c)
			{

				putchar(c + '0');

				putchar(d + '0');

				putchar(e + '0');
					if (c != 7)

				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
