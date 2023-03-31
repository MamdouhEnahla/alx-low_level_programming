#include "main.h"

/**
 * infinite_add - Chheck code
 * @n1: first arg
 * @n2: second arg
 * @r: third arg
 * @size_r: last arg
 *
 * Return: char value
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, l = 0, d = 0, k, f, s;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	l = i > j ? i : j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		f = i >= 0 ? n1[i] - '0' : 0;
		s = j >= 0 ? n2[j] - '0' : 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) % 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
