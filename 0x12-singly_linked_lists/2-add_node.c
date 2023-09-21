#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: a pointr to the list head
 *
 * @str: the new string added to the node
 *
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr_new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

		ptr_new = malloc(sizeof(list_t));

		if (ptr_new == NULL)
		{
			return (NULL);
		}

		ptr_new->str = strdup(str);
		ptr_new->len = len;
		ptr_new->next = (*head);
		(*head) = ptr_new;


	return (*head);
}
