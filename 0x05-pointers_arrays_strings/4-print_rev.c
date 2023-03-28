#include "main.h"

/**
 * print_rev - Check code
 * @s: function argument
 */
void print_rev(char *s)
{
	int indx = 0;

	while (s[indx])
		indx++;

	while (indx--)
	{
		_putchar(s[indx]);
	}
	_putchar('\n');
}
