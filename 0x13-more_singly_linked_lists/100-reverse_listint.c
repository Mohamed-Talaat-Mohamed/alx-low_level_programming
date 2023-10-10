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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}

