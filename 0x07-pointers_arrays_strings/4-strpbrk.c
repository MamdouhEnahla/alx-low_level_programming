#include "main.h"

/**
 * _strpbrk - Check code.
 * @s: first arg
 * @accept: second arg
 * Return: a pointer or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *ptr;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}
