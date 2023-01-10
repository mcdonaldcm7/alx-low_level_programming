#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a grid with all cells initialized to 0
 *
 * @width: width size
 * @height: height size
 *
 * Return: Pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *) malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{
				int tmp;

				for (tmp = 0; tmp < i; tmp++)
					free(grid[tmp]);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
	free(grid);
	return (NULL);
}
