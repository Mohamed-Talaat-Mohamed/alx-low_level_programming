#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 *			number to an unsigned int
 * @b: is pointing to a string
 *
 * Return: the converted number (Success) or
 *	0 if b = null or b != 0 or 1 (Faild)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bnum = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		bnum = (bnum * 2) + (*b++ - '0');
	}

	return (bnum);
}
