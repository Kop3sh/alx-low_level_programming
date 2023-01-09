#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - rests any number by reference to 98
* @str: memroy pointed by s
*
* Return: void
*/
char *_strdup(char *str)
{
	char *new;
	unsigned int i = 0, len = 0;

	if (!str)
		return (NULL);

	while (str[i++])
		len++;


	new = (char *) malloc(sizeof(char) * len);

	if (!new)
		return (NULL);

	for (i = 0; i <= len; i++)
		new[i] = str[i];
	
	new[len + 1] = '\0';

	return (new);
}
