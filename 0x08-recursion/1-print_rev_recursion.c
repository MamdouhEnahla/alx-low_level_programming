#include "main.h"

/**
 * _print_rev_recursion - Check code
 * @s: function arg
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
