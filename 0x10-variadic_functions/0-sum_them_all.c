#include "variadic_functions.h"

/**
 * sum_them_all - Check code
 * @n: no. of args
 * @...: the sum
 *
 * Return: An integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list lst;

	if (n == 0)
		return (0);
	va_start(lst, n);
	while (i--)
		sum += va_arg(lst, int);
	va_end(lst);

	return (sum);
}
