#include "main.h"

/**
* set_string - rests any number by reference to 98
* @s: memroy pointed by s
* @to: memroy pointed by s
*
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
