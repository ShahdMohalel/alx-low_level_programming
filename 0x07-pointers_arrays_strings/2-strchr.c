#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @c: The parameter 'c' represents the character.
 * @s: the parameter "*s" represents the string.
 * Return: returns "NULL" if not found / and locat if found.
*/
char *_strchr(char *s, char c)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
