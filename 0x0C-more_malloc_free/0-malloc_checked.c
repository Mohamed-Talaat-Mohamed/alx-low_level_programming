#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the area reserved in memory.
 *
 * Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *pb;

	pb = malloc(b);



	if (pb == NULL)
		exit(98);



	return (pb);
}
