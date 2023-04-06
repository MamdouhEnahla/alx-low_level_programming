#include "main.h"

/**
 * factorial - Check code
 * @n: function arg
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);
	
	return (n * factorial(n - 1));
}
