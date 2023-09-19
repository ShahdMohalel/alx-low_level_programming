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

index = (count - 1) / 2 + 1;

for (i = index; i < count; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
