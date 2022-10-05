#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *progName = argv[0];

	printf("%s\n", progName);
	return (0);
}
