#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: pointer
 *
 * Return:number of node
 */

size_t print_list(const list_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node_number++;
	}

	return (node_number);
}
