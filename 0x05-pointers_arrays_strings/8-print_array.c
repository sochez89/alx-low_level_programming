#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print arrays of integer
 * @a: array of int form
 * @n: integer signifying the array size
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
