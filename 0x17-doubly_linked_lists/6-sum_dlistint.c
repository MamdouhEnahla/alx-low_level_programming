#include "lists.h"

/**
 * sum_dlistint - sums of the values
 * @head: pointer to current head
 *
 * Return: sum as integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
