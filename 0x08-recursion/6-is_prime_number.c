#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to determine its status as a prime number or not
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - calculates if a number is prime recursively
 * @n: number to determine its status
 * @i: iterator
 *
 * Return: 1 if n is prime number, 0 if not
 */
int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_num(n, i - 1));
}
