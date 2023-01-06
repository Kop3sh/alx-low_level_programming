#include "main.h"

/**
* _strchr - rests any number by reference to 98
* @s: memroy pointed by s
* @c: const byte
*
* Return: char *
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
