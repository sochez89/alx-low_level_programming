#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lower case
 * Return: always 0
 */

int main(void)
{
<<<<<<< HEAD
	int num = '0';
	char num_10_16 = 'a';

	while (num <= '9')
=======
	int num = 0;
	char num_10_16 = 'a';

	while (num < 9)
>>>>>>> 64512be864765a8ebc9f86aa38601e9e1e2f6dde
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
