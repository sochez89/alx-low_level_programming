#include "main.h"

/**
 * _pow_recursion - function to print out power of a number
 * @x: integer base number
 * @y: integer that signies number of times x should multiply itself
 * Return: returns -1 if y is negative, or returns x
 * to power of y if y is positive
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
