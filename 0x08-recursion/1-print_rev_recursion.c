#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse manner,
 * followed by a new line.
 * @s: Input string to print
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
