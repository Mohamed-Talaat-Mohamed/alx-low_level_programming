#include "main.h"
#include <stdio.h>

/**
 * main - A function to print the program name
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
