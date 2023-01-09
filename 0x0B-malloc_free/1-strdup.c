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
	unsigned int i = 0, size;

	if (!str)
		return (NULL);

	while (str[i++])
		size++;


	new = (char *) malloc(sizeof(char) * size);

	if (!new)
		return (NULL);

	for (i = 0; i < size; i++)
		new[i] = str[i];

	return (new);
}
