#include<stdio.h>
#include "main.h"
/**
 * times_table - print times table.
 * void: no parameters "void".
 * Return: no return.
*/
void times_table(void)
{
int table;
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
table = i * j;
if (j != 9)
{
printf("%2d, ", table);
}
else
{
printf("%2d", table);
}
}
printf("\n");
}
return;
}
