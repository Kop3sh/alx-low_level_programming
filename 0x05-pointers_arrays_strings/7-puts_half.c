#include "main.h"

/**
* puts_half - rests any number by reference to 98
* @str: input by reference
*
* Return: void
*/
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = (len - 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
