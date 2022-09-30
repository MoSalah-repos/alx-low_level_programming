#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @alpha: the character to be checked
 * Return: 1 if alpha is uppercase, 0 otherwise
 */
int _isupper(int alpha)
{
	if ((alpha >= 'A') && (alpha <= 'Z'))
		return (1);
	else
		return (0);
}
