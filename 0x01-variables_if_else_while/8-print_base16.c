#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lower case
 * Return: always 0
 */

int main(void)
{
	int num = '0';
	char num_10_16 = 'a';

	while (num < 9)
	{
		putchar(num);
		num++;
	}
	while (num_10_16 < 'g')
	{
		putchar(num_10_16);
		num_10_16++;
	}
	putchar('\n');
return (0);
}
