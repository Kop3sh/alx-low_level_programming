#include "main.h"

/**
 * print_last_digit - prints wether the parameter is lowercase or not
 * @n: input character to be checked
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = -1 * last;

	_putchar(last + '0');
	return (last);
}
