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
	unsigned countbites = sizeof (n) * 8;
	unsigned shefter = 1UL << (countbites - 1);

	while (shefter > 0 && (n & shefter) == 0)
	{
		shefter >>= 1;
	}
	while (shefter > 0)
	{
		putchar((n & shefter) ? '1' : '0');
		shefter >>= 1;
	}
}
