#include "main.h"

/**
 * *_memset - copies const char to memory
 * @s: memory to be filled
 * @b: char
 * @n: times of copying b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
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

	char *pt;

	if (nmemb == 0 || size == 0)

		return (NULL);

	pt = malloc(size * nmemb);

		if (pt == NULL)

			return (NULL);

	_memset(pt, 0, nmemb * size);

	return (pt);

}
