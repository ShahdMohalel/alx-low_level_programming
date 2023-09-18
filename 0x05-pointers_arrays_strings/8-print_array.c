#include "main.h"
#include<stdio.h>
/**
 * print_array - check numbers sign
 * @n: The parameter 'n' represents the number of elem.
 * @a: the parameter "*a" the array
 * Return: no return
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
