#include "list.h"

/**
 * _strlen - Check code
 * @s: function arg
 * Return: integer value
 */
int _strlen(char *s)
{
	int ptr = 0;

	if (*s)
		ptr += _strlen_(s + 1) + 1;

	return (ptr);
}
/*
 * print_list - Check code
 * @h: a pointer to the head
 *
 * Return: the list size
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		printf("", _strlen(h->str), h->str ? h->str ? h->str : "(nil)");
		h = c->next;
		sz++;
	}
	return (sz);
}
