#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 *		including the terminating null byte, to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 *
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (ptr);
}
