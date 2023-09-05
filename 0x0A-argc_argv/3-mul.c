#include "main.h"

/**
 * main - Entry point
 * A program that multiplies two numbers
 * @argc: Numbers of arguments
 * @argv: Array of arguments
 * Return: if doesn't recieve 2 arguments return 1
 *	   if recieved 2 arguments return 0 (Success)
*/

int main(int argc, char **argv)
{
	int sum = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%i\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
