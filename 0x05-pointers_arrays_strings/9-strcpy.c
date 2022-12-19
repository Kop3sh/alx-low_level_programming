#include "main.h"
#include <stdio.h>

/**
* _strcpy - rests any number by reference to 98
* @dest: input by reference
* @src: length of arr
*
* Return: dest ptr
*/
char *_strcpy(char *dest, char *src)
{
	char *tmp;
	int i = 0, len = 0;

	while (src[i++])
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';
	return (dest);
}
