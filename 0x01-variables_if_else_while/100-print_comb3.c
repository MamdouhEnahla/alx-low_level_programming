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

	while (ch <= 9)
	{
		vh = 0;

		while (vh <= 9)
		{
			if (ch != vh && ch < vh)
			{
				putchar(ch + 48);
				putchar(vh + 48);
				if (ch + vh != 17)
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
