#include "main.h"

/**
 * *_memset - Check code.
 * @s: third arg
 * @b: second arg
 * @n: third arg
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - check code
 * @nmemb: first arg
 * @size: second arg
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mem = malloc(sizeof(int) * nmemb);

	if (mem == 0)
		return (NULL);

	_memset(mem, 0, sizeof(int) * nmemb);
	return (mem);
}
