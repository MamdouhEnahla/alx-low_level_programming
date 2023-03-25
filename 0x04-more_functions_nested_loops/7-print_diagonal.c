#include "main.h"

/**
 * print_diagonal - Check code
 * @n: function argument
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	else
		_putchar('\n');
}
