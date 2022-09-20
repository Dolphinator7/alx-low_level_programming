#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string being counted
 * returns: Nothing
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
