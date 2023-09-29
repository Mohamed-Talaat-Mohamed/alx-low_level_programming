#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned int *end = &num;

	return (*end);
}
