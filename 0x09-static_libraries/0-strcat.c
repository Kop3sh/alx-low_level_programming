#include "main.h"


/**
* _strcat - rests any number by reference to 98
* @dest: input by reference
* @src: input by reference
*
* Return: char dest ptr
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);
}
