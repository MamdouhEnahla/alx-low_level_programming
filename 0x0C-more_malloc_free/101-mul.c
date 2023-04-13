#include "main.h"

/**
 * _puts - Check code
 * @str: function arg
*/
void _puts(char *str)
{
	while (str)
	{
		_putchar(str);
		str++;
	}

}
/**
 * _stoi - check code.
 * @s: funcyion arg
 *
 * Return: An integer value.
 */

int _stoi(const char *s)
{
	int sign = 1;
	unsigned long int res = 0, n, i;

	for (n = 0; !(s[n] >= 48 && s[n] <= 57); n++)
	{
		if (s[n] == '-')
		{
			sign *= -1;
		}
	}

	for (i = n; s[i] >= 48 && s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}

	return (sign * res);
}
/**
 * print_int - check code.
 * @n: function arg
 */
void print_int(unsigned long int n)
{

	unsigned  long int dv = 1, i, res;

	for (i = 0; n / dv > 9; i++, dv *= 10)
	;

	while (dv >= 1)
	{
		res = n / dv;
		_putchar('0' + res);
		n %= dv;
		dv /= 10;
	}

}
/**
 * main - Entry Point.
 * @argc: No. of args
 * @argv: list of args
 *
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_stoi(argv[1]) * _stoi(argv[2]));
	_putchar('\n');

	return (0);
}
