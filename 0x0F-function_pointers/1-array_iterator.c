#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 *		a parameter on each element of array
 * @array: array to be printed
 * @size: elements to print
 * @action: function to be performed
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
