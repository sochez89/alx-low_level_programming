#include <stdio.h>

/**
 * main - print out both upper and lower case alphabets
 * Return: always 0 as far as the program executes successfully
 */

int main(void)
{
	char letter = 'a';
	char letter2 = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter2 <= 'Z')
	{
		putchar(letter2);
		letter2++;
	}
	putchar('\n');
}
