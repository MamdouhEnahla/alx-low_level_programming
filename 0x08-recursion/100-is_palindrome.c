#include "main.h"

int is_palind(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - checks for palindrome
 * @s: function arg
 *
 * Return: 1 for success, 0 else.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palind(s, 0, _strlen(s)));
}

/**
 * _strlen - Check code
 * @s: function arg
 *
 * Return: an integer represents the length
 */
int _strlen(char *s)
{
	if (!s)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palind - check code
 * @s: first arg
 * @i: second arg
 * @len: third arg
 *
 * Return: 1 for success, 0 else.
 */
int is_palind(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (is_palind(s, i + 1, len - 1));
}
