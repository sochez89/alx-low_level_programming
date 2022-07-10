#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - checking random numbers
 * Return: always 0 unless error occurs
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
