#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: 1 if number is positive, 0 if number
 * is 0 and -1 if numner is les than zero
 * Return: 1 for +ve, 0 for 0 and -1 for less than zero
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
