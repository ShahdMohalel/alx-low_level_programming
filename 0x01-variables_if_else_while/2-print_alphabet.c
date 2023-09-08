#include <stdio.h>
/**
 * main - putchar(ch[i])
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i;
for (i = 0; i < 26; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
