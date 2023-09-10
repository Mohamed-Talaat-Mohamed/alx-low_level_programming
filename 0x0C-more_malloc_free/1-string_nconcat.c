#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: secong string
 * @n: number of bytes from s2
 * Return: a newly allocated space in memory, which contains s1
 *		followed by the first n bytes of s2
 *		and null terminated If the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, s1_length, s2_length;

	/*treating Null passed as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calculate both of s1_length & s2_length*/
	for (s1_length = 0; s1[s1_length]; s1_length++)
	;
	for (s2_length = 0; s2[s2_length]; s2_length++)
	;

	/*memory allocation*/
	str = malloc(s1_length + n + 1);
	{
		if (str == NULL)
		return (NULL);
	}

	/*default action*/
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];

	/*n is greater or equal to the length of s2*/
	for (y = 0; y < n; y++)
		str[x] = s2[y];
			x++;
	str[x] = '\0';
	return (str);
}
