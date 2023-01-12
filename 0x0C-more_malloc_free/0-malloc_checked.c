#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - rests any number by reference to 98
* @b: memroy pointed by s
*
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (!b)
		return (NULL);

	mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}
