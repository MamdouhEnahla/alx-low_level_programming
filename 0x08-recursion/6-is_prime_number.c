#include "main.h"

/**
 * check_prime - check code
 * @n: first arg
 * @p: second arg
 *
 * Return: integer
 */
int check_prime(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return (0);
	return (check_prime(n, p + 1));
}
/**
 * is_prime_number - check code
 * @n: function arg
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
