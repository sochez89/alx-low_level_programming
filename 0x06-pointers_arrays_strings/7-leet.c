#include "main.h"

/**
 * *leet - function that encodes a string to number
 * @str: the string to be encoded
 * Return: returns pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	
	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
		i++;
	}
	return (str);
}
