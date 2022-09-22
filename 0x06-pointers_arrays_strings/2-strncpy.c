#include "main.h"
#include <string.h>

/**
 * _strncpy - c function that copies a string, including the
 * terminating null byte
 * the length of the source string
 * works identically to the standard library function strncpy
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
