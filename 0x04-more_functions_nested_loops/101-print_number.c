#include "main.h"

/**
 * print_number - Check code
 * @n: function argument
 */
void print_number(int n)
{
	unsigned int un = n;

	if (un < 0)
	{
		_putchar('-');
		un = -un;
	}
	if ((un / 10) > 0)
		print_number(un / 10);
	_putchar((un % 10) + 48);
}
