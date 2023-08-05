#include "main.h"

/**
 * clear_bit - clear a bit at the given index
 * @n: the number to clear
 * @index: the index of the bit
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
