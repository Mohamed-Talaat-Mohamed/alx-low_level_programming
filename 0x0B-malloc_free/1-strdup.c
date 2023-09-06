#include "main.h"

/**
 * _strdup - a function that returns a pointer
 *		to a newly allocated space in memory
 * @str: a string
 *
 * Return: a pointer to the duplicated string
 *	It returns NULL if insufficient memory was available
 *	or str is NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	ptr = malloc(sizeof(char) * (x + 1));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		ptr[y] = str[y];
	return (ptr);
}
