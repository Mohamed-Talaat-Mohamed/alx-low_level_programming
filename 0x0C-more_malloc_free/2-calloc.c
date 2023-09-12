#include "main.h"

/**
 * *_memset - copies const char to memory
 * @s: memory to be reserved
 * @b: char
 * @n: times of copying b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

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
