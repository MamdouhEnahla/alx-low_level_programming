#include "function_pointers.h"

/**
 * int_index - Check code
 * @array: first arg
 * @size: second arg
 * @cmp: third arg
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
