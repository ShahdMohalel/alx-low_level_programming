#include<stdio.h>
#include "main.h"
/**
 * print_sign - check numbers sign
 * @n: The parameter 'n' represents the number to be checked
 * Return: 1 if true / 0 if false
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
