#include<stdio.h>
#include "main.h"
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet()
{
char a;
for (a = 'a'; a < 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
