#include "main.h"

/**
 * main - Entry point
 * A program that print it`s name followed by new line
 * @argc: Number of arguments
 * @argv: Array of arguments
 * return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
