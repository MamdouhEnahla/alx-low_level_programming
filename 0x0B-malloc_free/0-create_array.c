#include "main.h"

/**
 * *create_array - Check code
 * @size: first arg
 * @c: second arg
 * Return: A pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	while (size--)
		ptr[size] = c;

	return (ptr);
}
