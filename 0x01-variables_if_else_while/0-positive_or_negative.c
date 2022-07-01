#include <stdio.h>
#include <time.h>

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
		printf(n "is positive");
	}
	else if (n == 0)
	{
		printf(n "is zero");
	}
	else if (n < 0)
	{
		printf(n "is negative");
	}
	/* your code goes there */
	return (0);
}
