#include "main.h"

/**
 * main - print alphabets ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char s = 'a';
	int n = 0;

	while (n < 10)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
		n++;
	}
}
