#include "main.h"

/**
 * rot13 - Check code
 * @p: function arg
 *
 * Return: char value
 */
char *rot13(char *p)
{
	int i;
	char *ptr = p;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*p)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*p == rot13[i])
			{
				*p = ROT13[i];
				break;
			}
		}
		p++;
	}
	return (ptr);
}
