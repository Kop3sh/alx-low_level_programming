#include "main.h"

/**
* print_rev - rests any number by reference to 98
* @s: input by reference
*
* Return: void
*/
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
