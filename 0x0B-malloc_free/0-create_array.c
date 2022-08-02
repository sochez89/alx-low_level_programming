#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - a function that creates an array of
 * characters and initializes with a specific char
 * @size: represents size of the array
 * @c: character representing the initialiazed array
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (s == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
