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
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int) * height);

	if (!grid)
		return (NULL);


	for (i = 0; i < height; i++)
		grid[i] = (int *) malloc(sizeof(int) * width);


	return (grid);
}
