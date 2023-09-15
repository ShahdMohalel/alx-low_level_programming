#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: The parameter "size" represents the size of tri.
 * Return: no return.
*/
void print_triangle(int size)
{
int r;
int s;
int h;
if (size <= 0)
{
_putchar('\n');
return;
}
for (r = 1; r <= size; r++)
{
for (s = 0; s < size - r; s++)
{
_putchar(' ');
}
for (h = 0; h < r; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
