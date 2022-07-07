#include "main.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: Integer value
 * Return: return 1 if digit is present and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
