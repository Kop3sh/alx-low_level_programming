#include <stdio.h>

/**
 * main - Entry point
 * @argc: num of cli parameters
 * @argv: arr of cli parameter values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
