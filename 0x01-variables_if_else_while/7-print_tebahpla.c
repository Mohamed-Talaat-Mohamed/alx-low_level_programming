#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: This Is a C program prints if lowercase alphabet in reverse
 *
 *Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
