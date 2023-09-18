#include "main.h"
/**
 * _puts - print strings
 * @str: The parameter "str" represents the string
 * Return: no return
*/
void _puts(char *str)
{
int i;
int count = 0;
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
