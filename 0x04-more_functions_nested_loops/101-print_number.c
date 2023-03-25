#include "main.h"

/**
 * print_number - Check code
 * @n: function argument
 */
void print_number(int n)
{
	unsigned int n = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar((n % 10) + 48);
}