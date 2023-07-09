#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * a program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
