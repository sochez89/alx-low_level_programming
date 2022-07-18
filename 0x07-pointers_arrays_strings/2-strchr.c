#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the sting to search for the string
 * @c: the character to be located
 * Return: returns pointer to the character c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
