#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: resulting string.
 *
 * @src: source string.
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	
	while (dest[i]!='\0')
	{
		i++;
	}
	while (scr[j]!='\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
