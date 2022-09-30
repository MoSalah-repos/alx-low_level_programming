#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers, followed by a new line
 * @argc: number of arguments
 * @argv: array of input  arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
