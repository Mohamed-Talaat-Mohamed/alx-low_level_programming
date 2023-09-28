#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t
 *
 * @head: pointer to the first node
 *
 *
 * @n: the new node
 * Return: new node address (success), or NULL (failed)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

		if (ptr == NULL)
		{
			return (NULL);
		}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
