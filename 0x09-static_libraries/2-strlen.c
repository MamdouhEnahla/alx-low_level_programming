#include "main.h"

/**
 * _strlen - Check code
 * @s: function argument
 *
 * Return: An integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
