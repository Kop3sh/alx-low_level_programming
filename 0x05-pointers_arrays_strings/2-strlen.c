#include "main.h"

/**
* _strlen - rests any number by reference to 98
* @s: input by reference
*
* Return: void
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;


	return (len);
}
