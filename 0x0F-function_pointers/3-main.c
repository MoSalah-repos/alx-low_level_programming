#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * main - program that perfroms simple operations
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, output;
	char oper;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	oper = *argv[2];

	if ((oper == '/' || oper == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = func(num1, num2);

	printf("%d\n", output);

	return (0);
}
