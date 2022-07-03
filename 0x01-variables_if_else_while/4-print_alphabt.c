#include <stdio.h>

/**
 * main - print lower case except q and e
 * Return: always return 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
return (0);
}
