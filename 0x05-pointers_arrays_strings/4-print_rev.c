#include "main.h"
/**
 * print_rev - print strings reversed
 * @s: The parameter "*s" represents the string
 * Return: no return
*/
void print_rev(char *s)
{
int i;
int count = 0;
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
for (i = count - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
