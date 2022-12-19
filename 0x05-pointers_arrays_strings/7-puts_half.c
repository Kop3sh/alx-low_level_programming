#include "main.h"

/**
* puts_half - rests any number by reference to 98
* @str: input by reference
*
* Return: void
*/
void puts_half(char *str)
{
	int n, i = 0, len = 0;

	while (str[i++])
		len++;
	
	if (len % 2)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
