#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

int is_leap_year(int year)
{
return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int total_days = day;

if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (is_leap_year(year))
{
days_in_month[2] = 29;
}

if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

for (int i = 1; i < month; i++)
{
total_days += days_in_month[i];
}

printf("Day of the year: %d\n", total_days);
printf("Remaining days: %d\n", is_leap_year(year) ? 366 - total_days : 365 - total_days);
}
