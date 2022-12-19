#include "main.h"

/**
* puts2 - rests any number by reference to 98
* @str: input by reference
*
* Return: void
*/
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i++)
	{
		if (i % 2)
			continue;
		_putchar(str[i]);
	}

	_putchar('\n');
}
