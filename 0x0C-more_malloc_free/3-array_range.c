#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - rests any number by reference to 98
* @min: memroy pointed by s
* @max: memroy pointed by s
*
* Return: void
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, diff = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(diff * sizeof(arr));

	if (!arr)
		return (NULL);

	for (i = 0; i < diff; i++)
		arr[i] = min++;

	return (arr);
}
