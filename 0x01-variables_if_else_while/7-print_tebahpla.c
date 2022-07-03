#include <stdio.h>

/**
 * main - print lower case in reverse order
 * Return: alwaays return 0
 */

int main(void)
{
	char letter_r = 'z';

	while (letter_r >= 'a')
	{
		putchar(letter_r);
		letter_r--;
	}
	putchar('\n');
return (0);
}
