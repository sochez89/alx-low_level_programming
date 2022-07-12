#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: String
 */

void rev_string(char *s)
{
	char hold;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;
	while (s[length1] != '\0')
	{
		length1++;
	}
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		hold = s[i];
		s[i] = s[length2];
		s[length2] = hold;
		length2 -= 1;
	}
}
