#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - putchar(a)
 * void: no parameters
 * Return: 0 always
*/
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
