#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to a newly allocated space in
 *	memory contains the contents of s1
 *	followed by the contents of s2
 *	and null terminated return NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x;
	int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	y = x;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}

	ptr[x] = '\0';

	return (ptr);
}
