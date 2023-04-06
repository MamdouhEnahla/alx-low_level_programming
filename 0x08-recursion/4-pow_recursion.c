#include "main.h"

/**
 * _pow_recursion - Check code.
 * @x: first arg
 * @y: second arg
 *
 * Return: a pointer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
