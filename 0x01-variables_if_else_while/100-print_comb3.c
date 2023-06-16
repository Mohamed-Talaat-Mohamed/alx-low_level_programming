#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A C program printsf *poss diff combinations of two digits
 *
 *Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
	for (digit2 = digit1 + 1; digit2 < 10; digit2++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');

		if (digit1 == 8 && digit2 == 9)
		continue;

		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
