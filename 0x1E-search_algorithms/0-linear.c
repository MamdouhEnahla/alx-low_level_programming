#include "search_algos.h"
/**
 * linear_search - finds a value in an array of integers
 * @array: a pointer to the array
 * @size: indicates the number of elements
 * @value: a value to find
 *
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
