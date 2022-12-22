#include "main.h"


/**
* string_toupper - rests any number by reference to 98
* @str: input by reference
*
* Return: void
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] -= 32;
	}

	return (str);
}
