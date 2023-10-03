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
	unsigned long int j;
	unsigned long int k = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
		{
			putchar('1');
			k++;
		}
		else if (k)
			putchar('0');
	}
		if (!k)
			putchar('0');
}
