#include "main.h"

/**
 * *_memset - Check code.
 * @s: first arg
 * @b: second arg
 * @n: third arg
 *
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
