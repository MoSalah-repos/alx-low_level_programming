#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers, followed by a new line
 * @argc: number of arguments
 * @argv: array of input  arguments
 *
 * Return: If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
