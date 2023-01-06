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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
