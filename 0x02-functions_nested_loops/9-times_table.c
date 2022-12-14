#include "main.h"

/**
 * times_table - prints the 9 multiplication table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}


void times_table(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			k = i * j;
			_putchar(k + '0');
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
