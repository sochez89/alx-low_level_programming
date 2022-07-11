#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @m: an integer
 *Return: return last digit
 */

int print_last_digit(int m)
{
	int n;

	m = m % 10;
	if (m < 0)
	{
		m = c * -1;
	}
	_putchar('0' + m);
	return (m);
}
