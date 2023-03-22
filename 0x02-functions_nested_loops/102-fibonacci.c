#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int i;
	unsigned long f1, f2, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
