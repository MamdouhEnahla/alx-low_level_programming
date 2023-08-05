#include "main.h"

/**
 * get_bit - check code
 * @n: number
 * @index: index
 *
 * Return: value or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
