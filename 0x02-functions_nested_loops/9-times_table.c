#include "main.h"

/**
 * times_table - prints the 9 multiplication table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; < 10; i++)
		{
			k = i * j;
			_putchar(k);
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
