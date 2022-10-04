#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integers,
 * NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width + height < 2 || width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(*a));
	if (a == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
