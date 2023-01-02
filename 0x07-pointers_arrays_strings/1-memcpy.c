#include "main.h"

/**
* _memcpy - rests any number by reference to 98
* @dest: memroy pointed by s
* @src: const byte
* @n: length of memory to be filled
*
* Return: char *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
