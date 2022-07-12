#include "main.h"

/**
 * puts2 - print all character of string
 * @str: String argument
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i = (i + 2))
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
