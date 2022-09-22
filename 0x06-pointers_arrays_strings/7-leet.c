#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lower_case[i] || *(s + count) == upper_case[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
