#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: pointer to node
 *
 * Return: pointer to node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = current;
		current = *head;
		*head = new;
	}
	*head = current;
	return (*head);
}

