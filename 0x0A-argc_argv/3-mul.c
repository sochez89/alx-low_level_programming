#include <stdio.h>
#include <stdlib.h>
/**
 * main - entrance of the program
 * @argc: first operand
 * @argv: second operand
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (0);
}
