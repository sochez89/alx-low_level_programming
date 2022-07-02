#include <stdio.h>

/**
 * main - print small letters a-z
 * Return: always 0 if the program execute successfylly
 */

int main(void)
{
	char letter = 'a';

	if (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar("\n");
return (0);
}
