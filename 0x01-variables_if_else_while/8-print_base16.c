#include <stdio.h>
/**
 * main - putchar(hexadecimal)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
int n;
char c;
for (n = 0; n < 10; n++)
{
putchar('0' + n);
}
for (c = 'A'; c <= 'F'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
