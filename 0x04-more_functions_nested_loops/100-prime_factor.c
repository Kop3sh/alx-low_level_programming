#include <stdio.h>
#include <math.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *		Fizz is printed instead of the number, for multiples of five,
 *		Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	long int maxPrime = -1;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
 
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
 
	if (n > 4)
		maxPrime = n;

	printf("%ld", maxPrime);

	return (0);
}
