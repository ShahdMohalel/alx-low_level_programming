#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenate strings.
 * @n: The parameter 'n' represents the number of bytes.
 * @s1: first string.
 * @s2: second string.
 * Return: string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
str = malloc(strlen(s1) + n + 1);
if (str == NULL)
{
return (NULL);
}
strcpy(str, s1);
strncat(str, s2, n);
return (str);
}
