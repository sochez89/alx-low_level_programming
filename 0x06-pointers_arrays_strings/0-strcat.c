#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: the source string
 * @dest: the destination that the file is to be concatenated
 * Return: returns pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len = 0;

	while (dest[index++])
	{
		len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[len++] = src[index];
	}
	return (dest);
}
