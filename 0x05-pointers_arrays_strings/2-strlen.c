#include "main.h"
#include <stddef.h>
/**
 * _strlen - return the length of string
 * @s: The parameter "*s" represents the string
 * Return: "len" return thr length
*/
int _strlen(char *s)
{
char str[100];
int len;
int i;
for (i = 0; i < 100; i++)
{
str[i] = s[i];
}
for (i = 0; i < 100; i++)
{
if (str[i] == '\0')
{
len = i;
break;
}
else
{
continue;
}
}
return (len);
}
