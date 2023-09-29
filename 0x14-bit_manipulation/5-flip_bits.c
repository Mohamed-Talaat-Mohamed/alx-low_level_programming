#include "main.h"

/**
 * flip_bits - function to return number of bits to flip number to another
 *
 * @n : num a
 *
 * @m : num b
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int x = 0;
	int  y;

	i = n ^ m;
	
	for (y = 63; y >= 0; y--)
	{
		if (i & 1)
		y++;
		i = i >> 1;
	}
	return (x);
}
