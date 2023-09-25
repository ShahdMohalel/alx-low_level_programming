#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates a character in a string.
 * @accept: The parameter "*accept" represents the string.
 * @s: the parameter "*s" represents the string.
 * Return: returns "NULL" if not found / and locat if found.
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
