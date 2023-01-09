#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - rests any number by reference to 98
* @s1: memroy pointed by s
* @s2: memroy pointed by s
*
* Return: void
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i = 0, concat_idx = 0, new_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		new_len++;

	new = (char *) malloc(sizeof(char) * new_len);

	if (!new)
		return (NULL);


	for (i = 0; s1[i]; i++)
		new[concat_idx++] = s1[i];

	for (i = 0; s2[i]; i++)
		new[concat_idx++] = s2[i];

	new[new_len] = '\0';

	return (new);
}
