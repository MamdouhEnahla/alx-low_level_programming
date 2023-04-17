#include "main.h"

/**
 * _strcat - Check code
 * @dest: first arg
 * @src: second arg
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, ch;

	while (dest[i])
		i++;
	for (ch = 0; src[ch]; ch++)
		dest[i++] = src[ch];
	return (dest);
}
