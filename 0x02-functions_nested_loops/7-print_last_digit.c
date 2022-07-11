#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @m: an integer
 *Return: return last digit
 */

int print_last_digit(int m)
{
	int n;

	n = m % 10;
	if (m < 10 && m >= -9)
	{
		_putchar(m);
	}
	else
	{
		_putchar(n);
	}
	return (n);
}
