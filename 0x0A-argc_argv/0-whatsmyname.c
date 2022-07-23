#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: counts number of arguments that is passed to the main
 * @argv: a pointer of array of pointer containing strings to be passed to main
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
