#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @m: an integer
 * Return: return last digit
 */

int print_last_digit(int m)
{
	m = m % 10;

	if (m < 10)
	{
		m = m * -1;
	}
	_putchar('0' + (m % 10);
	return (m % 10);
}
