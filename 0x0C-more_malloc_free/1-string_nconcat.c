#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * s2: string to append n bytes from to string one
 * @n: bytes of s2 to append to s1
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1,followed by the first n bytes of s2,
 * and null terminated (SUCCESS) and NULL (FAILURE)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fusion = NULL;
	unsigned int i, j, k, l, sl1, sl2;
	unsigned int myByte = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sl1 = 0;
	sl2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		sl1 += 1;
	for (j = 0; s2[j] != '\0'; j++)
		sl2 += 1;
	if (n >= sl2)
		myByte = sl2;
	fusion = (char *)malloc(sizeof(char) * (sl1 + myByte + 1));
	if (fusion == 0)
		return (NULL);
	for (k = 0, l = 0; k < (sl1 + myByte); k++)
	{
		if (k < sl1)
		{
			fusion[k] = s1[k];
		}
		else
		{
			fusion[k] = s2[l++];
		}
	}
	fusion[sl1 + myByte] = '\0';
	return (fusion);
}
