#include "main.h"

/**
 * *_realloc - Check code.
 * @ptr: first arg
 * @old_size: second arg
 * @new_size: third arg
 *
 * Return: a pointer or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		pt = malloc(new_size);
		if (!pt)
			return (NULL);
		return (pt);
	}
	if (new_size > old_size)
	{
		pt = malloc(new_size);
		if (!pt)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)pt + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (pt);
}
