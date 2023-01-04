#include "main.h"

/**
* _pow_recursion - rests any number by reference to 98
* @n: memroy pointed by s
*
* Return: void
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else
		return (_pow_recursion(x, y - 1) * x);

}
