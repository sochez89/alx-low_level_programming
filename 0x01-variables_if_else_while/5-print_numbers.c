#include <stdio.h>

/**
 * main - print all single digit numbers
 * Return: always 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
