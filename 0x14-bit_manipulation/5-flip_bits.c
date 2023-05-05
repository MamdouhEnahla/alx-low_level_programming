#include "main.h"

/**
 * flip_bits - Check code
 * @n: first arg
 * @m: second arg
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xval = n ^ m;
	unsigned int counter = 0;

	while (xval)
	{
		if (xval & 1ul)
			counter++;
		xval = xval >> 1;
	}
	return (counter);
}
