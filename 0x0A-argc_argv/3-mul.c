#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: num of cli parameters
 * @argv: arr of cli parameter values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, prod = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
		prod = prod * atoi(argv[i]);

	printf("%d", prod);

	return (0);
}
