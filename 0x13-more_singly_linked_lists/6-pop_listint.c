#include "lists.h"

/**
 * pop_listint - Check code
 * @head: a pointer to the head
 *
 * Return: the deleted node or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int item = 0;

	if (head && *head)
	{
		item = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	return (item);
}
