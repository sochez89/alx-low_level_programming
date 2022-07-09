#include "main.h"

/**
 *more_numbers - print numbers 1 -14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int t = 1;

	while (t <= 10)
	{
		for (n = 0; n <= 14;)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		t++;
	}
}
