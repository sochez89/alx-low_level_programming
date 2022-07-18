#include "main.h"

/**
 * *_memcpy - copy n bytes from one memory location to another
 * @dest: memory destination
 * @src: memory source (where to copy from)
 * @n: integer value representing the bumber of bytes to be copied
 * Return: returns a pointer to memory location named dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copied = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (copied);
}
