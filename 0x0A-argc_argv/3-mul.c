#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * A program that multiplies two numbers
 * @argc: Numbers of arguments
 * @argv: Array of arguments
 * Return: if doesn't recieve 2 arguments return 1
 *	   if recieved 2 arguments return 0 (Success)
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	{
		printf("%d\n", result);
	return (0);
	}
}
