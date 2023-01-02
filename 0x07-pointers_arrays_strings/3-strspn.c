#include "main.h"

/**
* _strspn - rests any number by reference to 98
* @s: memroy pointed by s
* @accept: const byte
*
* Return: unsingend int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, res = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				res++;
			j++;
		}
		i++;
	}

	return (res);
}
