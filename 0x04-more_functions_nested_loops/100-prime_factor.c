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
	int p, l;

	while (n % 2 == 0)
		n /= 2;
	for (p = 3; p <= _sqrt(n); p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
		l = n ;
	printf("%d\n", l);
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
