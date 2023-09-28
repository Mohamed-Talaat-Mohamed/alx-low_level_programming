#include "lists.h"

/**
 * add_nodeint_end - func to adds a new node at the end of a listint_t
 *
 * @head: first node
 *
 * @n: new node
 *
 * Return: address of new element, or NULL in  failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
