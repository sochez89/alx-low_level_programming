#include "main.h"

/**
 * *_islower - check for lower case character
 *@c: integer 1 0r 0
 * Return: return 1 for lower case and 0 otherwise
 */

int _islower(int c)
{

	if ((c <= 'a') && (c >= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
