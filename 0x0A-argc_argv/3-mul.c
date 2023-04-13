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
	int res = 1;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (res);
	}

	return (0);
}
