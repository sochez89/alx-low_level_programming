#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a sting
 * @str: the words to be capitalized
 * Return: returns a pointer to the changes string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == ' ' || tr[i - 1] == '\t' || tr[i - 1] == '\n'
			|| tr[i - 1] == ',' || tr[i - 1] == ';' tr[i - 1] == '.' ||
			tr[i - 1] == '!' || tr[i - 1] == '?' || tr[i - 1] == '"'
			|| tr[i - 1] == '(' tr[i - 1] == ')' tr[i - 1] == '{' ||
			tr[i - 1] == '}' || i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

