#include "main.h"
/**
 * _strlen - return the length of string
 * @s: The parameter "*s" represents the string
 * Return: "len" return thr length
*/
int _strlen(char *s)
{
char str[20] = *s;
int i;
int len;
for (i = 0; i < 20; i++)
{
if (str[i] == NULL)
{
i = len;
break;
}
else
{
continue;
}
}
return (len);
}
