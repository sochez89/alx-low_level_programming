#include "main.h"

/**
 * my_sqrt - function to print out
 * natural square root of a number
 * @x: the same integer number as n
 * @y: integer that iterates from 1 to n
 * Return: ...
 */
int my_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (my_sqrt(x, y + 1));
	}

}

/**
 * _sqrt_recursion - function that returns the
 * natural sqaure of a number passed to it
 * @n: an integer
 * Return: returns an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (my_sqrt(n, 1));
}
