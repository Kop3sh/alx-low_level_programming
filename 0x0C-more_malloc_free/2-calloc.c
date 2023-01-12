#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - rests any number by reference to 98
* @nmemb: memroy pointed by s
* @size: memroy pointed by s
*
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0 || nmemb  == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	return (arr);
}
