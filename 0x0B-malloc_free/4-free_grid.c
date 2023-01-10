#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - rests any number by reference to 98
* @grid: memroy pointed by s
* @height: memroy pointed by s
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i, j;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
