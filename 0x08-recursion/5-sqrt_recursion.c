#include "main.h"

/**
* _find_root - rests any number by reference to 98
* @n: memroy pointed by s
* @root: memroy pointed by s
*
* Return: void
*/
int _find_root(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root == n / 2)
		return (-1);
	else
		return (_find_root(n, root + 1));
}

/**
* _sqrt_recursion - rests any number by reference to 98
* @n: memroy pointed by s
*
* Return: void
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (_find_root(n, 2));
}
