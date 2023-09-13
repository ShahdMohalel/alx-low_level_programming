#include<stdio.h>
#include "main.h"
/**
 * times_table - print times table.
 * void: no parameters "void".
 * Return: no return.
*/
void times_table(void)
{
int i;
int j;
int table;
i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
table = i *j;
if (j != 9)
{
printf("%d, ", table);
}
else
{
printf("%d", table);
}
j++;
}
printf("\n");
i++;
}
return;
}
