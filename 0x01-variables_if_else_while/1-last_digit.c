#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main - print random numbers
 *  Return: Always 0 Unles error occurs
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %i is  greater than\n 5", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %i and is 0\n", n);
	}
	else if ((n % 10) < 6 && (n % 10) > 0)
	{
		printf("Last digit of %i and is les than 6 and not 0\n", n);
	}
	return (0);
}
