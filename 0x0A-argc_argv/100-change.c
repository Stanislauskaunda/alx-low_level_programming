#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 and if the number of arguments passed to your program is
 * not exactly 1 return 1
 */

int main(int argc, char *argv[])
{
	int cents, a, b, c, d, a1, b1, c1, d1;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		a = cents % 25;
		a1 = cents / 25;
		b = a % 10;
		b1 = a / 10;
		c = b % 5;
		c1 = b / 5;
		d = c % 2;
		d1 = c / 2;
		if (a == 0)
		{
			printf("%d\n", a1);
		} else if (b == 0)
		{
			printf("%d\n", a1 + b1);
		} else if (c == 0)
		{
			printf("%d\n", a1 + b1 + c1);
		} else if (d == 0)
		{
			printf("%d\n", a1 + b1 + c1 + d1);
		} else
		{
			printf("%d\n", a1 + b1 + c1 + d1 + d);
		}
		return (0);
}


