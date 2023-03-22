#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int i, f1, f2, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%i", sum);

		f1 = f2;
		f2 = sum;

		if (sum == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
