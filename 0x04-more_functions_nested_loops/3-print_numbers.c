#include "main.h"

/**
 * print_numbers - print out numbers 1 to 9
 * Return: always 0
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n  <= '9';)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
