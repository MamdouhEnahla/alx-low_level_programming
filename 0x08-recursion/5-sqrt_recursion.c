#include "main.h"

/**
 * _sqrt - Check code.
 * @n: first arg
 * @val: second arg
 *
 * Return: integer value.
 */
int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	return (-1);
}
/**
 * _sqrt_recursion - Check code
 * @n: function arg
 *
 * Return: integer value.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
