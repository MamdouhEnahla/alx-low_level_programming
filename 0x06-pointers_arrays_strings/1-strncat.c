#include "main.h"

/**
 * _strncat - Check code
 * @dest: first arg
 * @src: second arg
 * @n: third arg
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, ch;

	while (dest[i])
		i++;
	for (ch = 0; src[ch] && i < n; i++)
		dest[ch + i] = src[ch]
	dest[ch + i] = '\0';

	return (dest);
}
