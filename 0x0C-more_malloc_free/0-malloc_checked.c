#include "main.h"

/**
 * *malloc_checked - Check code
 * @b: function arg
 *
 * Return: a pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);
	return (mem);
}
