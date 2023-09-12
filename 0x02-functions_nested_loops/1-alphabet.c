#include<stdio.h>
#include "main.h"
/**
 * main - print_alphabet();
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char a;
for (a = 'a'; a < 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
