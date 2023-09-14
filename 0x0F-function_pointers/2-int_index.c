#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: number of elements
 * @cmp: pointer to function
 * Return: 0 success or (-1) if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size ; x++)
	{
	if (cmp(array[x]))
		return (x);
	}
	return (-1);
}
