#include "main.h"
#include <stdlib.h>

/**
 * word_counter - counts the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int word_counter(char *s)
{

	int f, i, wnbr;

	f = 0;
	wnbr = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			wnbr++;
		}
	}
	return (wnbr);
}
/**
 * **strtow - a function that splits a string into words 
 * @str: string to split 
 * Return: a pointer to an array of strings (words),
 * NULL on failure or if str == NULL or str == ""
 *
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
