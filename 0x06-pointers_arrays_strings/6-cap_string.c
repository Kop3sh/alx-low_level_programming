#include "main.h"


/**
* cap_string - rests any number by reference to 98
* @str: input by reference
*
* Return: char 
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i - 1] != '\0'; i++)
	{
		if (!(str[i - 1] >= 'a' && str[i] <= 'z'))
			continue;

		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
			str[i] -= 32;
	}

	return (str);
}
