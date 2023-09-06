#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments of all programs
 * @av: array
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int x, y, i = 0, n = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			n++;
	}
	n += ac;

	ptr = malloc(sizeof(char) * n + 1);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		ptr[i] = av[x][y];
		i++;
	}
	if (ptr[i] == '\0')
	{
		ptr[i++] = '\n';
	}
	}

	return (ptr);
}
