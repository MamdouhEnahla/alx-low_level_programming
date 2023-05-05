#include "main.h"

/**
 * set_bit - Check code
 * @n: first arg
 * @index: second arg
 *
 * Return: 1 for success, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
