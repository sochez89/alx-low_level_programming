#include "main.h"
#include <stddef.h>

/**
 * *_strstr - string that locates a substring
 * @haystack: string variable to search in
 * @needle: the string to search for
 * Return: returns the pointer that shows the beginning of the found string
 */

char *_strstr(char *haystack, char *needle)
{
	char *pt4haystack = haystack;
	char *pt4needle = needle;

	while (*haystack)
	{
		pt4haystack = haystack;
		needle = pt4needle;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = pt4haystack + 1;
	}
	return (NULL);
}
