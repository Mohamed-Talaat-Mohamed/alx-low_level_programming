#include <stdio.h>

/**
 * main - Entry Point
 *
 *Description: This Is a C program prints if alphabet in lowercase
 *
 *Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
