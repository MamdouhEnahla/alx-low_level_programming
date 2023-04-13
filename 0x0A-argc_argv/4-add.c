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
	int res = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < 48 || *ch > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[argc]);
	}

	printf("%d\n", res);
	return (0);
}
