#include "function_pointers.h"

/**
 * array_iterator - Check code
 * @array: first arg
 * @size: second arg
 * @action: third arg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
