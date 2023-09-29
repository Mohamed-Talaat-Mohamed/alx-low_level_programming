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
	unsigned int k, l = 0;

	if (b == NULL)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
		return (0);

		l = (l * 2) + (b[k] - '0');
	}
	return (l);
}
