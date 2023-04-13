#include "main.h"

/**
 * **alloc_grid - Check code.
 * @width: first arg
 * @height: second arg
 *
 * Return: a pointer to a 2d array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(*arr) * height);
	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
