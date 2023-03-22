#include "main.h"

/**
 * print_to_98 - check code
 *
 * @n: function agument
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i < 98; i++)
			printf("%i, ", i);
	else
		for (i = n; i > 98; i--)
			printf("%i, ", i);
	printf("98\n");
}
