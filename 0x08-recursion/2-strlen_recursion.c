#include "main.h"

/**
* _strlen_recursion - rests any number by reference to 98
* @s: memroy pointed by s
*
* Return: void
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
		len = _strlen_recursion(s + 1) + 1;
	return (len);

}
