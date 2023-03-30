#include "main.h"

/**
 * cap_string - Check code
 * @s: function arg
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' ||
				s[i - 1] == '"' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' ||
				s[i - 1] == '?' || s[i - 1] == '!')
			s[i] -= 32;

		i++;
	}
	return (s);
}
