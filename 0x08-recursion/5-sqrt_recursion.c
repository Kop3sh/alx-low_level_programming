#include "main.h"

/**
* factorial - rests any number by reference to 98
* @n: memroy pointed by s
*
* Return: void
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1) * n);

}
