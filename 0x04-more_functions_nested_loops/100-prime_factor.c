#include <stdio.h>

/**
 * _sqrt - Check code
 * @n: function argument
 *
 * Return: square root of n.
 */
double _sqrt(double n)
{
	float sq, i = 0;

	sq = n / 2;

	while (sq != i)
	{
		i = sq;
		sq = (n / i + i) / 2;
	}
	return (sq);
}

/**
 * largest_prime - Check code
 * @n: function argument
 */
void largest_prime(long int n)
{
	int pr, mx;

	while (n % 2 == 0)
		n /= 2;
	for (pr = 3; pr <= _sqrt(n); pr += 2)
	{
		while (n %  == 0)
		{
			n = n / pr;
			mx = pr;
		}
	}
	if (n > 2)
		mx = n;
	printf("%d\n", mx);
}
 /**
  * main - Entry point
  *
  * Return: always 0.
  */
int main(void)
{
	largest_prime(612852475143);

	return (0);
}
