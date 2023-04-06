#include "main.h"

/**
 * factorial - Check code
 * @n: function arg
 * Return: integer value
 */
int factorial(int n)
{
	int fac =  -1;

	if (n == 0 || n == 1)
		fac = 1;
	else
		fac = (n * factorial(n - 1));

	return (fac);
}
