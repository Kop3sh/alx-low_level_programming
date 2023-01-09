#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - rests any number by reference to 98
* @c: memroy pointed by s
* @size: size of array to be allocatoed
*
* Return: void
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return ("NULL");

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
