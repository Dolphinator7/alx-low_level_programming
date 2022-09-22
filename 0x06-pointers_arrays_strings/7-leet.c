#include "main.h"
/**
 * leet - a leet function
 * @x: param x
 * Return: string
 */
char *leet(char *x)
{
	int a = 0;

	while (x[a] != '\0')
	{
		x[a] == transform(x[a]);
		a++;
	}
	return (x);
}
