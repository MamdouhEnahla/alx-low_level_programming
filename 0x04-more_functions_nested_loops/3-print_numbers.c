#include "main.h"

/**
 * print_numbers - Check code
 *
 * Description: print from 0 to 9.
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + 48);
		c++;
	}
	_putchar("\n");
}
