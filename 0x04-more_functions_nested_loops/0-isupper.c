#include "main.h"

/**
 * _isupper - check presensce of upper case
 * @c: takes aurgument of the alphabet
 * Return: returns 1 if c is upper case and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
