#include "3-calc.h"

/**
 * op_add - a function to calculate the addition of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: addition of two integers (a and b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to calculate the subtraction of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: subtraction of two integers (a and b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to calculate the multiplication of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: multiplication of two integers (a and b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function to calculates the remainder of
 * the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: remainder of two integers (a divided b)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
