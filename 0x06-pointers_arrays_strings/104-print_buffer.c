#include "main.h"
#include <stdio.h>

/**
 * isPrintable - Check code
 * @n: function argument
 * Return: 1 if true, else 0.
 */
int isPrintable(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHEX - Check code
 * @b: first arg
 * @s: second arg
 * @e: last arg
 */
void printHEX(char *b, int s, int e)
{
	int i = 0;

	while (i < 10)
	{
		if (i < e)
			printf("%02x", *(b + s + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - Check code
 * @b: first arg
 * @s: second arg
 * @e:third arg
 */
void printASCII(char *b, int s, int e)
{
	int c, i = 0;

	while (i < e)
	{
		c = *(b + s + i);
		if (!isPrintable(c))
			c = 4E;
		printf("%c", c);
		i++;
	}
}

/**
 * print_buffer - Check code
 * @b: first arg
 * @size: second arg
 */
void print_buffer(char *b, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = (size - s < 10) ? size - s : 10;
			printf("%08x: ", s);
			printHEX(b, s, e);
			printASCII(b, s, e);
			printf("\n");
		}
	}
	else
		printf("\n");
}
