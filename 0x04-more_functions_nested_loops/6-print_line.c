#include "main.h"

/**
 * print_line -  draw horizontail line
 * @n: Integer
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
