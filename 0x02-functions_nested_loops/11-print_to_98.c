#include "main.h"

/**
 * print_to_98 - check code
 *
 * @n: function agument
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar(n);
	}
	else if (n < 98)
	{
		for (i = 0; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
