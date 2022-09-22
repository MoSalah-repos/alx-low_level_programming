#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: negative value if s1<s2, positive value if s2<s1,
 * and zero is they are equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
