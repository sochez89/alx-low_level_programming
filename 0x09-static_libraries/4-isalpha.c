#include "main.h"

/**
 * _isalpha - check for presence of a letter whether lower case or upper case
 * @c: integer 0 or 1
 * Return: 1 for presence of letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
