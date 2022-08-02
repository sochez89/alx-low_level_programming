#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: input pointer of the first string
 * @s2: input pointer of the second string
 * Return: returns the pointer to the newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *str1, *str2;
	int i = 0, len1 = 0, len2 = 0;

	str1 = s1;
	str2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = str1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = str2;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	str1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (str1);
}
