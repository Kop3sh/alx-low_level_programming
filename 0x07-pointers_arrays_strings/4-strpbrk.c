#include "main.h"

/**
* _strpbrk - rests any number by reference to 98
* @s: memroy pointed by s
* @accept: const byte
*
* Return: char *
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return ('\0');
}
