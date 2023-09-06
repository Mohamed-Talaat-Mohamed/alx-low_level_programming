#include "main.h"

/**
 * create_array -  a function that creates an array of chars
 *	and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character to initialize
 *
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	return (NULL);

	while (size--)
		ptr[size] = c;
	return (ptr);
}
