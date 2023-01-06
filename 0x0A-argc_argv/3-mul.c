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
	int x, y;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	
	x = atoi(argv[1]);
	y = atoi(argv[argc - 1]);


	printf("%d/n", x * y);

	return (0);
}
