#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Check code.
 * @a: first arg
 * @size: second arg
 */
void print_diagsums(int *a, int size)
{
	int i = 0, d1 = 0, d2 = 0;

	while (i < size)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
		i++;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
