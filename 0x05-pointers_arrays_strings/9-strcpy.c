#include "main.h"

/**
 * _strcpy - function to copy string
 * @dest: value of where the file is to be copied
 * @src: the source value
 * Return: return the pointer to destination value
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
