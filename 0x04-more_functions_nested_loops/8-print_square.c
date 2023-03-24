#include "main.h"

/**
 * print_square - Check code
 * @size: function argument
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
