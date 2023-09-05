#include <stdio.h>

/**
 * main - Entry Point
 * @argc: a length of argv array
 * @argv: an array of argc
 * return: (0)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[argc-1]);

	return (0);
}
