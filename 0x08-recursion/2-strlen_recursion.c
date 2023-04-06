#include "main.h"

/**
 * _strlen_recursion - Check code
 * @s: function arg
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int ptr = 0;

	if (*s)
		ptr += _strlen_recursion(s + 1) + 1;

	return (ptr);
}
