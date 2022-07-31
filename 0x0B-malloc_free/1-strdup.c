#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns pointer to a newly
 * allocated space in memory
 * @str: pointer to be copied
 * Return: returns pointer to a new string
 */

char *_strdup(char *str)
{
	char *new_allocation, *begin;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	begin = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = begin;
	new_allocation = malloc((len + 1) * sizeof(char));
	begin = new_allocation;
	if (new_allocation != NULL)
	{
		for (; i < len; i++)
		{
			new_allocation[i] = *str;
			str++;
		}
		new_allocation[i] = '\0';
		return (begin);
	}
	else
	{
		return (NULL);
	}
}
