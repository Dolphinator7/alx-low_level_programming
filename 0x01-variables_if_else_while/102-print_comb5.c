#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, o;

	for (n = 0; n < 100; n++)
	{
		for (o = 0; o < 100; o++)
		{
			if (o > n)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');
				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
