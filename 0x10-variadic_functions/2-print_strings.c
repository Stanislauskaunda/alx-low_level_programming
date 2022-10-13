#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("%s", "(nil)");
			}else
			{
				printf("%s", string);
			}
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
