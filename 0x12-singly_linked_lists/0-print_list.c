#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: a pointer to the head
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", strlen(h->str), h->str);
		else
			printf("[%d] %s\n", strlen(h->str), "(nil)");
		sz++;
		h = h->next;
	}
	return (sz);
}
