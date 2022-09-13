#include <stdio.h>
/**
  * main - finds and prints the sum of the even-valued
  * terms up to 4,000,000, followed by a new line.
  * Return: Nothing.
  */
int main(void)
{
	long int count, x, y, z, sum;

	x = sum = 0;
	y = 1;
	for (count = 0; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
