#include <stdio.h>
#include "main.h"
/**
 * print_number - print numbers
 * @n: The parameter 'n' represents the number to be checked
 * Return: no return
*/
void print_number(int n)
{
int m, l;
if (n < 0)
{
n = n / -1;
putchar('-');
}
if (n >= 0 && n <= 9)
{
putchar('0' + n);
}
else if (n >= 10 && n <= 99)
{
putchar('0' + n / 10);
putchar('0' + n % 10);
}
else if (n >= 100 && n <= 999)
{
putchar('0' + n / 100);
m = n % 100;
putchar('0' + m / 10);
putchar('0' + n % 10);
}
else if (n >= 1000 && n <= 9999)
{
putchar('0' + n / 1000);
l = n / 100;
putchar('0' + l % 10);
m = n % 100;
putchar('0' + m / 10);
putchar('0' + n % 10);
}
}
