#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A C program printsf *possible combinations single-digit num.
 *
 *Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	if (d != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
