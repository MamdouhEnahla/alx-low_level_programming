#include "main.h"

/**
 * *_strchr - Check code.
 * @s: first arg
 * @c: second arg
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
