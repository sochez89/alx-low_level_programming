#include "main.h"

/**
 * *_memset - a memory function
 * @s: string
 * @b: a character
 * @n: an integer
 * Return: returns pointer to the memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
