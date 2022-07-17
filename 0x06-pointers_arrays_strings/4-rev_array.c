#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse array elements
 * @a: name of array
 * @n: size of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - index] = a[i];
		a[index] = temp;
	}
}
