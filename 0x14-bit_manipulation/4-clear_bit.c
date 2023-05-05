#include "main.h"

/**
 * clear_bit - Check code
 * @n: first arg
 * @index: second arg
 *
 * Return: 1 for success, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
