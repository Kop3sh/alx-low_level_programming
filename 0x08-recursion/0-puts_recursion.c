#include "main.h"

/**
* _puts_recursion - rests any number by reference to 98
* @s: memroy pointed by s
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
