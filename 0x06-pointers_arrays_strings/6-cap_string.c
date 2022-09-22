#include "main.h"

/**
 * cap_string - function that capitalize first character of a word
 * @x: string param
 * Return: string
 */

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a-1] == spc[i]) && (s[a] >= 97 && s[a] <=22))
				s[a] = s[a] - 32;
			i++;
		}
		a++;
	}
	return (x);
}
