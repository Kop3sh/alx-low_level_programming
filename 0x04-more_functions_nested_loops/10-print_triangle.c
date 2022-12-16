#include "main.h"

/**
 * print_triangle - print decimal numbers fromo 0 to 9
 * @size: number of lines
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - j; i++)
		{
			_putchar(' ');
		}
		for (i = 0; i <= j; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

