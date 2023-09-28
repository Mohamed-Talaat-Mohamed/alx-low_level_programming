#include "main.h"

/**
 * binary_to_uint - func to converts binary to unsigned int
 *
 * @b: string of ones and zeros
 *
 * Return: converted num or 0 if chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	unsigned int  i = 0;

	if (!b)
		return (0);

	for (x = 0; b[x] ; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);

		i = i * 2 + (b[j] - '0');
	}
	return (i);
}
