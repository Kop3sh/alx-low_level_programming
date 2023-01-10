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
	int * row;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	row = (int *) malloc(sizeof(int) * width);

	grid = (int **) malloc(sizeof(row) * height);

	if (!grid || !row)
	{
		free(grid);
		free(row);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (!grid[i])
		{
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}


	free(row);
	return (grid);
}
