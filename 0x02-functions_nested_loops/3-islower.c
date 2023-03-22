#include "main.h"

/**
 * islower - check code
 *
 * @ch: function argument
 *
 * Return: 1 for lower 0 otherwise.
 *
 */
int islower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (1);
	return (0);
}
