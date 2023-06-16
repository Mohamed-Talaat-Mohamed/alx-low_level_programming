#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: A C program printsf *single digit numbers of base 10 starting
 *
 *Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
