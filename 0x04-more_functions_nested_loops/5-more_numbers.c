#include<stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers
 * void: no parameters.
 * Return: no return.
*/
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
return;
}
