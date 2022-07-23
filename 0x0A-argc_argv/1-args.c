#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: integer value representing number of arguments passed to function
 * @argv: an arrays of strings passed to function
 * Return: 0;
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		(void) argv;
		printf("%i\n", argc - 1);
	}
	return (0);
}
