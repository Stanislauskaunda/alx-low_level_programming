#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: the factorial of n and in case n is lower
 * the 0, the function should return -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
