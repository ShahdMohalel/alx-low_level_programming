#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: The parameter "*a" represents the 2D array.
 * @size: represents the "size" of array.
 * Return: no return "void".
*/
void print_diagsums(int *a, int size)
{
int i, j;
int dig1 = 0;
int dig2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
dig1 += a[i * size + j];
}
}
}
for (i = 0; i < size; i++)
{
for (j = size - 1; j >= 0; j--)
{
if (i + j == size - 1)
{
dig2 += a[i * size + j];
}
}
}
printf("%d, ", dig1);
printf("%d\n", dig2);
}
