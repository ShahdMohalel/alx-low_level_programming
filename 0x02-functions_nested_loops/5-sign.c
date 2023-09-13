#include<stdio.h>
#include "main.h"
/**
 * print_sign - check numbers sign
 * @n: The parameter 'n' represents the number to be checked
 * Return: 1 if true / 0 if false
*/
int print_sign(int n)
{
int sign;
char ss;
if (n > 0)
{
ss = '+';
sign = 1;
return (ss);
}
else if (n < 0)
{
ss = '-';
sign = 1;
return (ss);
}
else
{
ss = '0';
sign = 0;
return (ss);
}
return (sign);
}
