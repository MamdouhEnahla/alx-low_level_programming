#include "main.h"

/**
 * leet - Check code
 * @n: function arg
 *
 * Return: char Value.
 */
char *leet(cahr *n)
{
	int i = 0, j;
	char lettres[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == letters[j])
				n[i] = numbers[j];
		}
		i++;
	}
	return (n);
}
