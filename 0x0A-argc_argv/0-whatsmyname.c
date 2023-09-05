#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *A program that print it`s name followed by new line
 * @argc: Number of arguments
 * @argv: Array of arguments
 * return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
