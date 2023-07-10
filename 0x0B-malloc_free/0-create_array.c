#include "main.h"

/**
 * char *create_array - a function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: char to initialize
 *
 * Return: Returns NULL if size = 0
 *		Return apointer to the array if it fails
*/

char *create_array(unsigned int size, char c);
char *c = malloc(size);
	if (size == 0 || c == 0)
	{
		return (NULL);
	}
	while (size--)
		c[size] = c;
	{
		return (c);
	}
