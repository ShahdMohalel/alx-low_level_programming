#include <stdio.h>
#include "main.h"
/**
 * print_line - print lines
 * @n: The parameter 'n' represents the number of '_'
 * Return: no return
*/
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
}
