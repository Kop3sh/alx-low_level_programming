#include "main.h"

/**
 * print_to_98 - get 2 integers and adds the result
 * @n: input starting number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
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
			_putchar(n + '0');
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
