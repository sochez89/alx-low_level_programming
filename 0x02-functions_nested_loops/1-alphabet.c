#include "main.h"

/**
 * print_alphabet - prototype function to print out lower case alphabets
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
