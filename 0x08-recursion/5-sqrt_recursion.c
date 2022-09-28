#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to work with
 * Return: the natural square root of n and if it doesn't
 * have one return -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt_help(n, 1));
}

/**
 * sqrt_help - helper function to solve _sqrt_recursion
 * @num: number to determine if square root
 * @i: incrementer to compare against num
 * Return: square root if natural square root, or -1 if none found
 */
int sqrt_help(int num, int i)
{
	int square;

	square = i * i;
	if (square == num)
	{
		return (i);
	}
	if (square < num)
	{
		return (sqrt_help(num, i + 1));
	}
	if (square > num)
	{
		return (-1);
	}
	return (0);
}

