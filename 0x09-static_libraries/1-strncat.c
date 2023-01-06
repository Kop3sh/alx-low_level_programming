#include "main.h"


/**
* _strncat - rests any number by reference to 98
* @dest: input by reference
* @src: input by reference
* @n: input n to be concatenated
*
* Return: char dest ptr
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);
}
