#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which (the cmp function does
 * not return 0) and if no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
