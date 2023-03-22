#include <stdio.h>

/**
 * num_length - gets length
 *
 * @n: function arg
 *
 * Return: number of digits.
 */
int num_length(int n)
{
	int len = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		len += 1;
	}

	return (len);
}

/**
 * main - Entry Point
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int i, zeros;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1z = 0, f2z = 0, sumz = 0;

	for (i = 1; i <= 98; i++)
	{
		if (f1z > 0)
			printf("%lu", f1z);
		zeros = num_length(mx) - 1 - num_length(f1);

		while (f1z > 0 && zeros > 0)
		{
			printf("%d", 0);
			zeros--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumz = f1z + f2z + (f1 + f2) / mx;
		f1 = f2;
		f1z = f2z;
		f2 = sum;
		f2z = sumz;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
