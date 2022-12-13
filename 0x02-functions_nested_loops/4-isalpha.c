#include "main.h"

/**
 * _islower - prints wether the parameter is lowercase or not
 * @c: input character to be checked
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
