#include "main.h"

/**
* puts2 - rests any number by reference to 98
* @str: input by reference
*
* Return: void
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
			_putchar(str[i]);
		else
			_putchar(str[++i]);
		i++;
	}

	_putchar('\n');
}
