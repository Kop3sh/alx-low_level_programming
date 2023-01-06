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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
