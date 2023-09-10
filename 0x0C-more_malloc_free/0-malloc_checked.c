#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: reserved memory space
 *
 *Return: 98 if malloc falls
 *		pointer to allocated memory if success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

