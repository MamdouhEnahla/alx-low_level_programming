#include "lists.h"

/**
 * reverse_listint - Check code
 * @head: a pointer to the old head
 *
 * Return: a pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_n = NULL;
	listint_t *next_n = NULL;

	while (*head)
	{
		next_n = (*head)->next;
		(*head)->next = prev_n;
		prev_n = *head;
		*head = next_n;
	}

	*head = prev_n;

	return (*head);
}
