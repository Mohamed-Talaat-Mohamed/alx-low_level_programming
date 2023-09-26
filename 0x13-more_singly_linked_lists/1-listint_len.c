#include "lists.h"

/**
 * listint_len - function to print linked list number of elements
 *
 * @h: pointer of first node
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	do {
		h = h->next;
		x++;
	} while (h);
	return (x);
}
