#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * Return: always 0
 */

int main(void)
{
	int i;

	n = '0';
	for (n <= '9';)
	{
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n);
	return (0);
}
