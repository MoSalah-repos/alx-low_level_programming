#include "main.h"
/**
 *_strcpy - copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest.
 *@dest: A pointer to a char
 *@src: A pointer to a char to be copied
 *Return: the pointer to the  dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
