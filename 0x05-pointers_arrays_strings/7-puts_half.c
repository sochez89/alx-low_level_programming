#include "main.h"
#include <string.h>

/**
 * puts_half - function to print half of string
 * @str: String argument
 */

void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
	{
		b = (a / 2) + 1;
	}
	else
	{
		b = a / 2;
	}
	for (c = b; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
