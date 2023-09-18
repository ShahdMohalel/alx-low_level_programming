#include "main.h"
/**
 * puts2 - print characters
 * @str: The parameter "*str" represents the string
 * Return: no return
*/
void puts2(char *str)
{
int i;
int count;
count = 0;
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
if (i % 2 == 2)
{
_putchar(str[i]);
}
else
{
continue;
}
}
_putchar('\n');
}
