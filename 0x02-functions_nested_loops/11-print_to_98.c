#include "main.h"

/**
 * print_to_98 - get 2 integers and adds the result
 * @n: input starting number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n < 99)
		{
			_putchar(n + '0');
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	while (n > 99)
	{
		_putchar(n + '0');
		if (n > 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}
