#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 *
 * @h: pointer of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	do {
		printf("%d\n", h->n);
		x++;
		
		h = h->next;

	} while (h);

	return (x);
}
