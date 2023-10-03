#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: The parameter "*s" represents the string.
 * @accept: the parameter "*accept" represents the string.
 * Return: returns '0'/number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int span = 0;
int match;
for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
span++;
match = 1;
break;
}
}
if (match != 1)
{
return (span);
}
}
return (span);
}
