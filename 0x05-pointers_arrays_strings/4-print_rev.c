#include "main.h"

/**
* print_rev - rests any number by reference to 98
* @s: input by reference
*
* Return: void
*/
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
