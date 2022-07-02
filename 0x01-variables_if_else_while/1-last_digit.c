#include <stdio.h>

/**
 *  main - print lowercase a-z
 *  Return: Always 0 Unles error occurs
 */

int main(void)
{
	char alpha = "a";

	while (alpha <= "z")
	{
	putchar(alpha);
	alpha++;
	putchar("\n");
	return (0);
	}
}
