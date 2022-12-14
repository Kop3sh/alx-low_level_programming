#include "main.h"

/**
 * times_table - prints the 9 multiplication table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i,j;
	
	for(j=0; j < 10; j++)
	{
		for(i=0; < 10; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');	
		}
		_putchar('\n');
	}
}
