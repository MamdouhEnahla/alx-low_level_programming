#include "main.h"

/**
 * print_line - Check code
 * @n: function argument
 *
 */
void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
