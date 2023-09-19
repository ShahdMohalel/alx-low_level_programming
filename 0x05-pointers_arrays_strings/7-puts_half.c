#include "main.h"
/**
 * puts_half - prints half string
 * @str: The parameter "str" represents the string
 * Return: no return
*/
void puts_half(char *str)
{
int i;
int count = 0;
int index;
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
if (count % 2 == 0)
{
index = count / 2;
}
else
{
index = (count - 1) / 2;
}
for (i = index; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
