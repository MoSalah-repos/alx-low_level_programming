#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the resultant array (Success) or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = (int **) malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0; j <= i; j++)
				free(ar[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
