#include "main.h"


/**
* reverse_array - rests any number by reference to 98
* @int: input by reference
* @j: input by reference
*
* Return: void
*/
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
