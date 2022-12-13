#include "main.h"

/**
 * print_last_digit - prints wether the parameter is lowercase or not
 * @n: input character to be checked
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n % 10 == 0)
		return (0);

	return (n % 10);
}
