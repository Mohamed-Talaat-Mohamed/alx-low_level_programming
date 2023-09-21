#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to the list
 *
 * Return: number of elements in the node
 */
size_t list_len(const list_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}
