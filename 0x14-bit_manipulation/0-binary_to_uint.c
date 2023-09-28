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
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
