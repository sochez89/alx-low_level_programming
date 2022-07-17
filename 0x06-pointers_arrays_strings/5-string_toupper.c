#include "main.h"

/**
 * *string_toupper - function that changes lowercase letters to uppercase
 * @str: the string to be converted to uppercase
 * Return: returns 0
 */

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j])
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= 32;
		}
		j++;
	}
	return (str);
}
