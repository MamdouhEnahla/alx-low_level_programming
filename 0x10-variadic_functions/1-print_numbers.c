#include "variadic_functions.h"

/**
 * print_numbers - Check code
 * @separator: the string separator
 * @n: no. of args
 * @...: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list lst;

	while (i--)
		printf("%d%s", va_arg(lst, int),
			i ? (separator ? separator : "") : "\n");
	va_end(lst);
}
