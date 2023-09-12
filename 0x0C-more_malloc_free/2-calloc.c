#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

		if (ptr == NULL)

			return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);

}
