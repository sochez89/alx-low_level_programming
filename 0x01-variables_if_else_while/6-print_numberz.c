#include <stdio.h>

/**
 * main - print all base ten single digit numbers as character
 * Return: Always zero
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
