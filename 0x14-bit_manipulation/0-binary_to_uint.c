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
	int x;

	if (b == NULL)
		return (0);
	else
	{
		for (x = 0; b[x]; x++)
		{
			if (b[x] < '0' || b[x] > '1')
			return (0);
		
			num = (num * 2) + (b[x] - '0');
		}

	return (num);
}
