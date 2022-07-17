#include "main.h"

/**
 * *_strncpy - functin that copies string
 * @dest: destination where the string will be copied to
 * @src: the origin where the file will be copied from
 * @n: integer value
 * Return: return the address of the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
		for (index = src_len; index < n; index++)
		{
			dest[index] = '\0';
		}
	}
	return (dest);

}
