#include "main.h"

/**
 * *_memcpy - Check code
 * @dest: first arg
 * @src: second arg
 * @n: third arg
 *
 * Return: a pointer.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
