#include "main.h"

/**
 * _isdigit -  a function that checks for a digit (0 through 9).
 * @num: The character to be tested
 * Return: 1 if num is a digit, 0 otherwise
 */
int _isdigit(int num)
{
	if ((num >= 48) && (num <= 57))
		return (1);
	else
		return (0);
}
