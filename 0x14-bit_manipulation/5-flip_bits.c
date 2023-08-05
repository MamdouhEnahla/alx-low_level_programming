#include "main.h"

/**
 * flip_bits - check code
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}

