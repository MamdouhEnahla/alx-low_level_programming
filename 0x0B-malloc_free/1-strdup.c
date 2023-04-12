#include "main.h"

/**
 * *_strdup - Check code
 * @str: function arg
 * Return: a pointer to a new string or NUL.
 */
char *_strdup(char *str)
{
	int i = 0, sz = 0;
	char *mem;

	if (!str)
		return (NULL);

	while (str[sz])
		sz++;

	mem = malloc(sz * sizeof(*str) + 1);

	if (mem == 0)
		return (NULL);

	while (i < sz)
	{
		mem[i] = str[i];
		i++;
	}
	return (mem);
}
