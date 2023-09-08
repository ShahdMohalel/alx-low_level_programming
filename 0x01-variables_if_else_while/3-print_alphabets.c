#include <stdio.h>
/**
 * main - putchar(a,A)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
char a;
char A;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);	
}
putchar('\n');
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
return (0);
}
