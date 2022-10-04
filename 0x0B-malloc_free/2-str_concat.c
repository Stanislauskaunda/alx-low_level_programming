#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string to append to string one
 * Return: pointer to a newely allocated space in memory
 * which contains s1 followed by s2 and null terminator or,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	s = malloc(sizeof(char) * (i + j) + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
		{
			s[k] = s1[k];
		}
		else
		{
			s[k] = s2[l++];
		}
	}
	return (s);
}
