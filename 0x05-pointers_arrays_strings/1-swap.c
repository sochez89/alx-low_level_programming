#include "main.h"

/**
 * swap_int - function that swap value of two integers
 * @a: pointer to integer value
 * @b: pinter to second integer value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
