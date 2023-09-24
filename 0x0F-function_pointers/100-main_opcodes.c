#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int x;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;

	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
