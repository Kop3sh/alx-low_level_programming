#include "main.h"

/**
* swap_int - rests any number by reference to 98
* @a: input by reference
* @b: input by reference
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;


	*a = *b;
	*b = tmp;
}
