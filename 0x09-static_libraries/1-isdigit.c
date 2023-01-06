#include "main.h"

/*
 * _isdigit - check uppercase letters
 * @c: input character
 *
 *
 * Return: alwyas 0
 */
int _isdigit(int c)
{
	if (c < '0' && c > '9')
		return (1);
	return (0);
}

