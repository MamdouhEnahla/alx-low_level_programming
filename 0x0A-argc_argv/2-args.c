#include <stdio.h>

/**
 * main - Entry point
 * @argc: No. of args
 * @argv: arr of args
 *
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; argc--; i++)
		printf("%s\n", argv[i]);
	return (0);
}
