#include "main.h"

/**
 * islower - check code
 *
 * @c: function argument
 *
 * Return: 1 for lower 0 otherwise.
 *
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
