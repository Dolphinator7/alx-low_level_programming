#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: a pointer starting
 * returns: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
