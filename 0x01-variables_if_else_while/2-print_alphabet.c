#include <stdio.h>
/**
 * main - putchar(ch[i])
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
