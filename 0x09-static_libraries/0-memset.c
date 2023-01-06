#include "main.h"

/**
* _memset - rests any number by reference to 98
* @s: memroy pointed by s
* @b: const byte
* @n: length of memory to be filled
*
* Return: void
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
