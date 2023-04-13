#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: No. of args
 * @argv: arr of args
 *
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	int res = 1;

	if (argc != 3)
		return (printf("Error\n"), 1);
	res = atoi(argv[1]) * atoi(argv[2]);

	return (0);
}
