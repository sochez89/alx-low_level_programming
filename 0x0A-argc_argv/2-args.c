#include "main.h"
#include <stdio.h>

/**
 * main - entry of a program
 * @argc: number of argument passed into main
 * @argv: an array of strings passed to main
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
