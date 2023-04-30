#include "lists.h"

/**
 * free_listint - Check code
 * @head: a pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
