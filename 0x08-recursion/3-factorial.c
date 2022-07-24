#include "main.h"
#include <stddef.h>

/**
 * factorial - function that prints out nth factorial
 * @n: positive integer value to find its factorial
 * Return: returns -1 if the n is negative, return 1 if n = 0
 * and returns n! if n is positive
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
