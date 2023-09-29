#include "main.h"

/**
 * print_binary - a function that prints the binary
 *		representation of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int count_bites = sizeof(n) * 8;
	int num = 0;

	if (num == NULL)
		return ('0');

	while (num > 0 && (n & num) == 0)
	{
		num >>= 1;
	}
	while (num > 0)
	{
		putchar((n & num) ? '1' : '0');
		num >>= 1;
	}
}
