#include "main.h"

/**
 * print_diagonal - print decimal numbers fromo 0 to 9
 * @n: number of lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

