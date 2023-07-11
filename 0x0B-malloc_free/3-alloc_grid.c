#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2
 *	dimensional array of integers.
 *@width: width of grid
 *@height: hight of grid
 * Return: returns a pointer to a 2
 *	dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **g;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		g[w] = malloc(sizeof(int) * width);

		if (g[w] == NULL)
		{
			for (; w >= 0; w--)
				free(g[w]);

			free(g);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			g[w][h] = 0;
	}

	return (g);
}

