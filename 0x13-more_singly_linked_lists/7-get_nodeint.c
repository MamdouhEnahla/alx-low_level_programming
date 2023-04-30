#include "lists.h"

/**
 * get_nodeint_at_index - Check code
 * @head: the head of the linked list
 * @index: the index of the desired node
 *
 * Return: a pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indx = 0;
	listint_t *temp = head;

	while (temp && indx < index)
	{
		temp = temp->next;
		indx++;
	}

	return (temp ? temp : NULL);
}
