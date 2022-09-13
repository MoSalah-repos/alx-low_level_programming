#include <stdio.h>
/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  * Return: Nothing.
  */
int main(void)
{
	long in count, x, y, z;

	x = 0;
	y = 1;
	for (count = 0; count < 50; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
