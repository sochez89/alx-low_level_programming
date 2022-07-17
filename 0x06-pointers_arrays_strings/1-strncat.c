#include "main.h"

/**
 * _strncat - concatenate two strings using at maximum
 * an inputted number of bytes from src
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes from src to be appended to dest
 * Return: return pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
