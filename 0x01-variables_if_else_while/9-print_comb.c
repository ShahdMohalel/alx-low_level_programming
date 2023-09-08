#include <stdio.h>
/**
 * main - putchar(0-9)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
int i;
putchar('0');
for (i = 1; i < 10; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
