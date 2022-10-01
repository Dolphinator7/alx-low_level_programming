#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: a pointer starting
 * returns: length of the string
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
