#include "main.h"

/**
 * _strlen - check code
 * @s: function arg
 *
 * Return: len
 */
int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] ; sz++)
	;
	return (sz);
}

/**
 * *str_concat - check code
 * @s1: first arg
 * @s2: second arg
 *
 * Return: a pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *mem;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	mem = malloc((sz1 + sz2) * sizeof(char) + 1);

	if (mem == 0)
		return (0);

	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			mem[i] = s1[i];
		else
			mem[i] = s2[i - sz1];
	}
	mem[i] = '\0';
	return (mem);
}
