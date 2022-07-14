#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: an Integer
 */

void print_diagonal(int n)
{
	int l;
	int m;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			for (m = 1; m < l; m++)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
