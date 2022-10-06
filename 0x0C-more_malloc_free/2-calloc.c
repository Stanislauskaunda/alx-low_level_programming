#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of array elements
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	while (i <  (nmemb * size))
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
