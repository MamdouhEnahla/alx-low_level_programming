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

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
		}
		i++;
	}
	return (s);
}
