#include "main.h"
#include "stdio.h"

/**
* print_diagsums - rests any number by reference to 98
* @a: memroy pointed by s
* @size: memroy pointed by s
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, backwards = 0, forwards = 0;

	for (i = 0; i < size; i++)
	{
		backwards += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		forwards += a[i];
		a -= size;
	}
	printf("%d, %d\n", backwards, forwards);
}
