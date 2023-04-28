#include "lists.h"

/**
 * _strlen - Check code
 * @s: function arg
 *
 * Return: number of bytes in the string pointed  to  by s.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s)
		len += _strlen_(s + 1) + 1;

	return (len);
}

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
			printf("[%d] %s\n", _strlen(h->str), h->str);
		else
			printf("[%d] %s\n", _strlen(h->str), "(nil)");
		sz++;
		h = h->next;
	}
	return (sz);
}
