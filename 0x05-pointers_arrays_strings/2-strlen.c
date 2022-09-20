#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: An input string
 *
 * Description: returns the length of a string
 * returns: Nothing
 */

void _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
