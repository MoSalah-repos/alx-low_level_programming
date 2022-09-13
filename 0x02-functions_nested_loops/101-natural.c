#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples
  * of 3 or 5 below 1024 (excluded), followed by a new line.
  * Return: 0.
  */

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	printf("%d\n", sum);
	return (0);
}
