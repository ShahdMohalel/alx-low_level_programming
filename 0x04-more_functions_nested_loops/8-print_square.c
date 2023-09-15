#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square.
 * @size: The parameter "size" represents the size of the square.
 * Return: no return.
*/
void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
return;
}
