#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 *@dest: destination string
 *
 *@src: source string
 *
 * Return: (dest)
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	dest_len = 0;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];


	return (dest);
}
