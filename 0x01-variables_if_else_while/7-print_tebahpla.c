#include <stdio.h>
/**
 * main - putchar(z)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
char z;
for (z = 'z'; z >= 'a'; z--)
{
putchar(z);
}
putchar('\n');
return (0);
}
