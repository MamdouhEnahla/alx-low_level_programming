#include "lists.h"

/**
 * insert_nodeint_at_index - Check code
 * @head: the head of the list.
 * @idx: the desired index of the new node
 * @n: an integer element.
 *
 * Return: the address of the new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_n;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h; i++)
		{
			h = h->next;
		}
	}

	if (!h && idx != 0)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
	}
	else
	{
		new_n->next = h->next;
		h->next = new_n;
	}

	return (new_n);
}
