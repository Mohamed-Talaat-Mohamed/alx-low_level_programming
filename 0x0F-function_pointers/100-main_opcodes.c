#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes of his own
 * @argc: number of elements
 * @argv: array of elements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
