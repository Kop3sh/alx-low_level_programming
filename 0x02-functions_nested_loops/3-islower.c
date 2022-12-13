#include "main.h"

/**
 * islower - prints wether the parameter is lowercase or not
 *
 * Return: Always 0.
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
