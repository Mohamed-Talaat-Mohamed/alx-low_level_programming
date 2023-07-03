#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *
 * @s: string
 *
 * @accept: consist
 *
 * Return: the number of bytes in the initial segment of
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; accept[r] != s[i]; r++)
		{
			if (accept[r] == '\0')
				return (i);
		}
	}
	return (i);
}
