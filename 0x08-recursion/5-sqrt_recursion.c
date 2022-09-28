#include "main.h"

int tmp_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to determine the value of the square root
 *
 * Return: the square root value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (tmp_sqrt_recursion(n, 0));
}

/**
 * tmp_sqrt_recursion - tries to find the natural
 * square root of a number
 * @n: number to determine the value of the sqaure root
 * @i: iterator
 *
 * Return: the square root value
 */
int tmp_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (tmp_sqrt_recursion(n, i + 1));
}
