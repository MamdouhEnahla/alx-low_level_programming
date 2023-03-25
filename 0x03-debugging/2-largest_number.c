#include <stdio.h>

/**
 * largest_number - Check code
 * @a: first arg
 * @b: second arg
 * @c: third arg
 *
 * Return: largest of the three inputs.
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;

	return (largest);
}
