#include "main.h"

/**
 * *_strcpy - Check code
 * @dest: first arg
 * @src: second arg
 *
 * Retrun: a pointer that refers to the given string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
