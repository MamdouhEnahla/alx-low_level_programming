#include "main.h"

/**
 * print_square - Check code
 * @size: function argument
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		if (size < 1)
		{
			_putchar('\n');
			break;
		}
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
}
