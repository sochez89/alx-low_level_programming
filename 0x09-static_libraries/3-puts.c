#include "main.h"

/**
 * _puts - function that prin string
 * @str: character parameter to the function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
