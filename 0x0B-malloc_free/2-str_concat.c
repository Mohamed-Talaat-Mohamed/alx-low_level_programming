#include "main.h"
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in
 *	memory contains the contents of s1,
 *	followed by the contents of s2, and null terminated
 *	return NULL if failed.
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = i;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}

	s[i] = '\0';

	return (s);
}

