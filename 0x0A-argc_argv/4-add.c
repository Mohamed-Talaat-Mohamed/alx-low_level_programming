#include "main.h"
/**
 * main - Entry point
 * to add 2 positive numbers and print the result
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 1 if error, 0 if function runs properly
 */

int main(int argc, char *argv[])
{
	int total, num, x, y;

	total = 0;
	if (argc > 1)
	{
		for (x = 1; argv[x]; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[x]);
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
