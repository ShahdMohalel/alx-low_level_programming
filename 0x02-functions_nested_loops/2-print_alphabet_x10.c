#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10X
 * void: no parameters
 * Return: 0 always
*/
void print_alphabet_x10(void)
{
char a;
int i;
for (i = 0; i <= 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
}
putcahr('\n');
}