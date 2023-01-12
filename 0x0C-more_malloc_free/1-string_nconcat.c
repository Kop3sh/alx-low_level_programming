#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - rests any number by reference to 98
* @s1: memroy pointed by s
* @s2: memroy pointed by s
* @n: number of chars to be concatenaged
*
* Return: void
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, str_idx = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i]; i++)
		len_s2++;
	
	if (n >= len_s2)
		n = len_s2;

	str = malloc((n * sizeof(char)) + sizeof(s1));

	if (!str)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[str_idx++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[str_idx++] = s2[i];

	str[str_idx] = '\0';
	return (str);
}
