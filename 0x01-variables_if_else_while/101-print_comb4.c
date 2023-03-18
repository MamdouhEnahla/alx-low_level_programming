#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 0, vh, gh;

	while (ch <= 9)
	{
		vh = 0;
		while (vh <= 9)
		{
			gh = 0;
			while (gh <= 9)
			{
				if (ch != vh && ch < vh && vh != gh && vh < gh)
				{
					putchar(ch + 48);
					putchar(vh + 48);
					putchar(gh + 48);

					if (ch + vh + gh != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				gh++;
			}
			vh++;
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
