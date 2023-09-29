#include "main.h"

/**
 * clear_bit - function to clear value of bit
 *
 * @n : number
 *
 * @index: index
 *
 * Return: 1 if success/0 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	else if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
