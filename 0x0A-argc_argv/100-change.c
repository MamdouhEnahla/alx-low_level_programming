#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry Point.
 *@argc: no. of args
 *@argv: arr of args
 *
 *Return: 0 success or 1 error.
 */
int main(int argc, char *argv[])
{
	int i = 0, lc = 0, money;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
		return (printf("Error\n"), 1);

	money = atoi(argv[1]);

	if (money < 0)
		printf("0\n");

	while (i < 5)
	{
		if (money >= coins[i])
		{
			lc += money / coins[i];
			money %= coins[i];
			if (money % coins[i] == 0)
				break;
		}
		i++;
	}
	printf("%d\n", lc);

	return (0);
}
