#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: a pointer to the head of a node
 *
 * @str: a string to be added to the node
 *
 * Return: address of the new element (success), or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->length = length;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
