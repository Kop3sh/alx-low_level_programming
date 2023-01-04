#include "main.h"

/**
* _print_rev_recursion - rests any number by reference to 98
* @s: memroy pointed by s
*
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
