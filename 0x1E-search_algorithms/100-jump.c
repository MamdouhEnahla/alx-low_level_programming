#include <math.h>
#include "search_algos.h"
/**
 * jump_search - jump search Implementation
 *
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: index of value in array, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int start = 0;
	int section_end = 0;

	if (array == NULL || size == 0 || array[start] > value)
		return (-1);

	while (section_end < (int)size)
	{
		if (array[section_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", section_end, array[section_end]);

			start = section_end;
			section_end += jump;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", start, section_end);

	if (section_end > (int)size - 1)
		section_end = size - 1;

	while (start <= section_end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
