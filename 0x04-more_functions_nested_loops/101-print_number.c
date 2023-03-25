#include "main.h"

/**
 * print_number - Check code
 * @n: function argument
 */
void print_number(int n)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar('-');
		un = -n;
	}
	if (un / 10)
		print_number(un / 10);
	_putchar((un % 10) + 48);
}
