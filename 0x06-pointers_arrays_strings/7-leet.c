#include "main.h"


/**
* leet - rests any number by reference to 98
* @str: input by reference
*
* Return: char
*/
char *leet(char *str)
{
	int i, j;

	char rep[] = {'O', 'L', 'x', 'E', 'A', 'x', 'x', 'T'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == rep[j] || str[i] - 32 == rep[j])
				str[i] = j + '0';
		}
	}

	return (str);
}
