#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the list
 *
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
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