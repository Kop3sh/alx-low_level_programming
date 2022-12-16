#include "main.h"

/**
 * fizzbuzz - print decimal numbers fromo 0 to 9
 *
 * Return: void
 */
void fizzbuzz(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		} else if (j % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		} else if (j % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		} else
		{
			_putchar(j + '0');
		}
		_putchar(' ');
	}
}

