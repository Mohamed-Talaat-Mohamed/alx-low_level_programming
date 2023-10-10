#include "lists.h"

/**
 *free_list - function to free linked list
 *@head: list pointer
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
