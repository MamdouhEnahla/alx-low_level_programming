#include "main.h"

/**
 * array_range - Check code.
 * @min: first arg
 * @max: second arg
 *
 * Return: a pointer to array of integers
 */
int *array_range(int min, int max)
{
	int n, i;
	int *ptr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (!ptr)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = min++;
	return (ptr);
}
