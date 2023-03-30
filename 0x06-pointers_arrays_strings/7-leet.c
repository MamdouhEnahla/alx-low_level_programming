#include "main.h"

/**
 * leet - Check code
 * @s: function arg
 *
 * Return: char Value.
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char lettres[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i])
	{
		while ((j < 10) && (s[i] == letters[j]))
		{
			s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
