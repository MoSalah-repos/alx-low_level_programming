#include "main.h"
/**
 * _islower - Return 1 if letter is in lowercase, 0 if not.
 * @num: the ASCII number corresponfing lowercase
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int num)
{
	if (num > 96 && num < 123)
		return (1);
	else
		return (0);
}
