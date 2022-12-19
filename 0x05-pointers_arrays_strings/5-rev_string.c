#include "main.h"

/**
* rev_string - rests any number by reference to 98
* @s: input by reference
*
* Return: void
*/
void rev_string(char *s)
{
	int len = 0, i = 0;
	char *tmp = NULL;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		tmp[len - i - 1] = s[i];

	_putchar('\n');
}
