#include "main.h"

/**
 * print_binary - Check code
 * @n: the function arg
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, outpt = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			outpt++;
		}
		else if (outpt)
			_putchar('0');
	}
	if (!outpt)
		_putchar('0');
}
