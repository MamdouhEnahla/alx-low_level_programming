#include "main.h"

/**
 * get_bit - Check code
 * @n: first
 * @index: second arg
 *
 * Return: the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
