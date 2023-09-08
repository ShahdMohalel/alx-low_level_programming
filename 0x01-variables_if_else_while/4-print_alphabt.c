#include <stdio.h>
/**
 * main - putchar(a,z,ex:q,ie)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
