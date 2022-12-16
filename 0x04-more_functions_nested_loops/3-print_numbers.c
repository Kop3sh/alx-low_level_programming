#include "main.h"

/*
 * print_numbers - check uppercase letters
 *
 *
 * Return: alwyas 0
 */
void print_numbers(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		_puthchar(i + '0');
	}

	_putchar('\n');

}

