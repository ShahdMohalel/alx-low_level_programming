#include <stdio.h>
/**
 * main - putchar('0'+ i)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
