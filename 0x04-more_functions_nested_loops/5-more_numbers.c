#include "main.h"

/**
 *more_numbers - print numbers 1 -14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int t = 0;

	while (t < 15)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		n++;
	}
}
