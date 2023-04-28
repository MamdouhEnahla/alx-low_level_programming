#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		sz++;
		h = h->next;
	}
	return (sz);
}
