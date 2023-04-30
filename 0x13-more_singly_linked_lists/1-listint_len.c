#include "lists.h"

/**
 * listint_len - Check code
 * @h: a linked list
 *
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
