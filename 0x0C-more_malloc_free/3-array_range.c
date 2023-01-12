#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - rests any number by reference to 98
* @s1: memroy pointed by s
* @s2: memroy pointed by s
* @n: number of chars to be concatenaged
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
