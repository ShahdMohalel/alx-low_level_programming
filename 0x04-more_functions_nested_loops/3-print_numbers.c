#include<stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers using _putchar('0' + i);
 * void: no parameters.
 * Return: no return.
*/
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar('0' + i);
}
_putchar('\n');
return;
}
