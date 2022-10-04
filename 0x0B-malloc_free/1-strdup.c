#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string
 * str, NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	dup = malloc(sizeof(char) * i + 1);
	if (dup == 0)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';
	return (dup);
}
