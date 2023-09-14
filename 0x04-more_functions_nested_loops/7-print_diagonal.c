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
putchar('\n');
return;
}
for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
