#include "main.h"

/**
 * _abs - print absolute value of a number
 * @a: An integer
 * Return: return absolut value of number passed through the function
 */

int _abs(int a)
{
	if (a <  0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
