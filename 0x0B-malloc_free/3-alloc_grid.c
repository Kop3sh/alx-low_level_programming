#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - rests any number by reference to 98
* @height: memroy pointed by s
* @width: memroy pointed by s
*
* Return: void
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
