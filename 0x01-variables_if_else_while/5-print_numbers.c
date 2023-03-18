#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		printf("%d", ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
