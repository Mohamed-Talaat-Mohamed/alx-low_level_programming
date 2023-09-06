#include "main.h"

/**
 * alloc_grid - returns a pointer to a two
 *	dimensional array of integers
 *@width: width of grid
 *@height: hight of grid
 * Return: returns a pointer to a two
 *	dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int wid, hei;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (wid = 0; wid < height; wid++)
	{
		ptr[wid] = malloc(sizeof(int) * width);

		if (ptr[wid] == NULL)
		{
			for (; wid >= 0; wid--)
				free(ptr[wid]);

			free(ptr);
			return (NULL);
		}
	}

	for (wid = 0; wid < height; wid++)
	{
		for (hei = 0; hei < width; hei++)
			ptr[wid][hei] = 0;
	}

	return (ptr);
}
