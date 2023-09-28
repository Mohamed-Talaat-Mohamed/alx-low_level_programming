#include "lists.h"

/**
 * print_listint - a function to prints all the elements of a listint_t
 *
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		x++;
	}

	return (x);
}
