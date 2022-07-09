#include "main.h"

/**
 *more_numbers - print numbers 1 -14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int t;

	for (t = 1; t <= 14;)
	{
		for (n = 0; n <= 9;)
		{
			_putchar(n + '0');
			n++;
		}
		t++;
		_putchar('\n');
	}
}
