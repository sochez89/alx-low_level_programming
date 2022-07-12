#include "main.h"
#include <string.h>

/**
 * _strlen - display length of string
 * @s: character argument
 * Return: Return length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
