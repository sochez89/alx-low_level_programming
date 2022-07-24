#include "main.h"

/**
 * prime1 - function to evaluate from 1 to n
 * @x: the same number as n
 * @y: integer that iterates from 1 to n
 * Return: integer
 */

int prime1(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (prime1(x, y + 1));
	}
}

/**
 * is_prime_number - function that returns 1 if
 * argument recieved is a prime number
 * @n: integer number
 * Return: returns 1 if n is prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime1(n, 2));
	}
}
