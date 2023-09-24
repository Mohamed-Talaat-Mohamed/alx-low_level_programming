#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Prints the result of operations
 *
 * @argc: number of arguments
 *
 * @argv: array of pointers
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	char *ptr;

	ptr = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == 0 || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0 && *ptr == '/') || (atoi(argv[3]) == 0 && *ptr == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	
	return (0);
}
