#include<stdio.h>
#include "main.h"
/**
 * print_most_numbers - print numbers except '2' and '4'.
 * void: no parameters.
 * Return: no return.
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
else
{
continue;
}
}
_putchar('\n');
return;
}
