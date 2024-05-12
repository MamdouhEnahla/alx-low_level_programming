#include "search_algos.h"
/**
 * binary_search - finds a value in an array of integers
 * @array: a pointer to the array
 * @size: indicates the number of elements
 * @value: a value to find
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, index;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf(index != left ? ", %d" : "%d", array[index]);
		}
		printf("\n");
		mid = (left + right) / 2;
		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
