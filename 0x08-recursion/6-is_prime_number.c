#include "main.h"

/**
* _find_prime - rests any number by reference to 98
* @n: base
* @org: base
*
* Return: int
*/
int _find_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_find_prime(n, i + 1));
}
/**
* is_prime_number - rests any number by reference to 98
* @n: base
*
* Return: void
*/
int is_prime_number(int n)
{
	return (_find_prime(n, 2));
}
