#include "main.h"

/**
 * print_sign - check code
 *
 * @n: function argument
 *
 * Return: 1 for positive -1 for negative 0 otherwise.
 *
 */
int print_sign(int n)
{
	if (n > 1)
		return (1);
	else if (n < 1)
		return (-1);
	return (0);
}
