#include "main.h"

/**
 * leet - Check code
 * @s: function arg
 *
 * Return: char Value.
 */
char *leet(char *s)
{
	int i = 0, j;
	char lettres[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i])
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
