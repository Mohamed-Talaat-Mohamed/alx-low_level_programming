#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 *@haystack: string
 *
 *@needle: substring
 *
 *Return: a pointer to the beginning of the located substring
 *		or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *n = needle;

		while (*i == *n && *n != '\0')
		{
			i++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}

