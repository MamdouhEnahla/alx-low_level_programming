#include "main.h"

/**
 * *_strstr - Check code
 * @haystack: first arg
 * @needle: second arg
 * Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] && needle[j - i] ; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
		}
		if (!needle[j - i])
			return (haystack + i);
	}
	return ('\0');
}
