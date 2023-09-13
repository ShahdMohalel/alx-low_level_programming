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
putchar('-');
putchar('0' + 1);
putchar('\n');
}
else if (n > 0)
{
putchar('+');
putchar('0' + 1);
putchar('\n');
}
else
{
putchar('0' + 0);
putchar('0' + 0);
putchar('\n');
}
return (0);
}
