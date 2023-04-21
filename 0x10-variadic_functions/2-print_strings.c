#include "variadic_functions.h"

/**
 * print_strings - Check code
 * @separator: the string separator
 * @n: no. of args
 * @...: the strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list lst;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(lst, n);
	while (i--)
		printf("%s%s", (str = va_arg(lst, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(lst);
}
