#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to pick from
 * @accept: character to locate in the string
 * Return: returns pointer to the location
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, appear;
	char *begin = accept;

	while (*s)
	{
		appear = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				appear = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = begin;
		if (appear == 0)
			break;
	}
	return (count);
}

