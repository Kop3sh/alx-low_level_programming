#include "main.h"
#include <stdio.h>

/**
* print_array - rests any number by reference to 98
* @a: input by reference
* @n: length of arr
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
