#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - print out how many days that is remaining in
 *the year with leap year put into consideration
 * @month: month
 * @day: day of the month
 * @year: year
 * Return: Nothing
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4) == 0 && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %2d/%2d/%4d\n", month, day, day - 31, year)
		}
	}
	else
	{
		printf("Day of the year:%d\n", day);
		printf("Reamining days: %d\n", 365 - day);
	}
}
