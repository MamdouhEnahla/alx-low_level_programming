#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 0, vh;

	while (ch <= 99)
	{
		vh = ch;
		while (vh <= 99)
		{
			if (vh != ch)
			{
				putchar((ch / 10) + 48);
				putchar((ch % 10) + 48);
				putchar(' ');
				putchar((vh / 10) + 48);
				putchar((vh % 10) + 48);
				if (ch + vh != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			vh++;
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
