#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function that locates first occurence of accept in s
 * @s: string to search in
 * @accept: character to check for its occurence
 * Return: returns the the location of first occurrence of accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
		while (*accept)
		{	
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = begin;
		s++;
	}
	return (NULL);
}
