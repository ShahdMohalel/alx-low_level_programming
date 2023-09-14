#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal.
 * @n: The parameter 'n' represents the number to print back
 * Return: no return
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
return;
}
