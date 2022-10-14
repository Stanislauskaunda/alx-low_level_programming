#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function to add two integers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to calculate the difference between two integers
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func to calculate the product of two integers
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - func to calc the result of division
 * @a: integer
 * @b: integer
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - func to calculate remainder of the division
 * @a: integer
 * @b: integer
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

