#include "main.h"
#include<stdio.h>
/**
 * print_times_table - print times table.
 * @n: this parameter 'n' represents number.
 * Return: no return.
*/
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
printf("Q");
}
else
{
int table;
int i;
int j;
int zero;
zero = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == 0)
{
printf("%d", zero);
}
else if (i == 0 && (j == 0 && i == 0))
{
printf("%3d, ", zero);
}
else
{
table = i * j;
if (j != 0)
{
printf(", ");
}
printf("%3d", table);
}
}
printf("\n");
}
}
return;
}
