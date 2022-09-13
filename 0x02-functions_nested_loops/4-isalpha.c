#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter, lowercase or uppercase.
 * @num: the ASCII number corresponfing lowercase or uppercase
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int num)
{
	if ((num > 64 && num < 91) || (num > 96 && num < 123))
		return (1);
	else
		return (0);
}
