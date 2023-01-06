#include "main.h"

/**
* _puts - rests any number by reference to 98
* @s: input by reference
*
* Return: void
*/
void _puts(char *s)
{

	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
