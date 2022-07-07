#include "main.h"
#include <stdio.h>

/**
 * @n: integer 
 * Return: prints from n to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98, n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n !=98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

