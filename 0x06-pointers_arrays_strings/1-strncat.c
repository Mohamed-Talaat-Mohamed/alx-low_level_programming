#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 *@n: maximum number of bytes to concatenate from src
 *
 * Return: (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; i < n && src[i]; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
