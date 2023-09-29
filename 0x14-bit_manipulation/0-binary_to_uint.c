#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: list of ones and zeros
 *
 * Return: num or zero if faild
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	do
	{
		if (*b != '1' && *b != '0')
			return (0);

		num = num * 2 + (*b++ - '0');
	}while (*b);
	
	return (num);
}
