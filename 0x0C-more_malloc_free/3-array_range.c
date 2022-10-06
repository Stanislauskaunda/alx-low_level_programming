#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a = NULL;
	int i = 0;
	int range = (max - min) + 1;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * range);
	if (a == NULL)
		return (NULL);
	while (i < range)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
