#include "main.h"

/**
 * _abs - prints wether the parameter is lowercase or not
 * @n: input character to be checked
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
