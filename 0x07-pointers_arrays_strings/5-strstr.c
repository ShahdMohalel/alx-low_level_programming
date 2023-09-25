#include "main.h"
#include <stddef.h>
/**
 * _strstr -  locates a substring.
 * @haystack: The parameter "*haystack" represents the string.
 * @needle: the parameter "*needle" represents the string.
 * Return: returns "NULL" if not found / and locat if found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
int count, match = 0;
for (j = 0; needle[j] != '\0'; j++)
{
count++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; j < count; j++)
{
if (haystack[i] == needle[j])
{
match++;
if (match == count - 1)
{
return (&haystack[i]);
}
}
}
}
return (NULL);
}
