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
	if (array == NULL || cmp == NULL)
		return (-1);
	if (sixe <= 0)
		return (-1);

	int x;

	for (x = 0; x < size ; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
