#include "main.h"


/**
* _strcmp - rests any number by reference to 98
* @s1: input by reference
* @s2: input by reference
*
* Return: int bool
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff =  0;

	for (i = 0; s2[i] != '\0' && s1[i] != '\0'; i++)
		if (s2[i] != s1[i])
		{
			diff = s1[i] - s2[i];
			break;
		}

	return (diff);
}
