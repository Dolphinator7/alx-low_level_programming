#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer starting
 * returns: the len of a str
 */

int _strlen(char *s)
{
	int length = 0;

	while(s[length] != '\0')
	{
		length++;
	}

	return (length);
}
