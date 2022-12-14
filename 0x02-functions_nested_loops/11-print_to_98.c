#include "main.h"

/**
 * print_to_98 - get 2 integers and adds the result
 * @n: input starting number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int u, d;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n > 9)
			{
				u = n % 10;
				d = (n - u) / 10;

				_putchar(d + '0');
				_putchar(u + '0');
			}
			if (n == 98)
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n > 9)
			{
				u = n % 10;
				d = (n - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			if (n == 98)
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
