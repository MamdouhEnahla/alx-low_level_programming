#include "main.h"

/**
 * isalpha - check code
 *
 * @c: function argument
 *
 * Return: 1 for lower 0 otherwise.
 *
 */
int isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
