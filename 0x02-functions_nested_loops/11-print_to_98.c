#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: The parameter 'n' represents the number to print from.
 * Return: 0 always
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
putchar('0' + i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
