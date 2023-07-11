#include "main.h"

/**
 *char *_strdup - a function that returns a pointer to a newly allocated space
 *		in memory, which contains a copy of the string given as a parameter
 *
 * @str: string to return
 *
 * Return: NULL if str = NULL
 *	or returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *s;
	int i, l;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (1 + i));

	if (s == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		s[l] = str[l];
	return (s);
}
