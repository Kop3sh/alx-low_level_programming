#include "main.h"

/**
 * print_sign - prints wether the parameter is lowercase or not
 * @n: input character to be checked
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	elif (n < 0)
		_putchar('-');
		return (-1);
	_putchar('0');
	return (0);
}
