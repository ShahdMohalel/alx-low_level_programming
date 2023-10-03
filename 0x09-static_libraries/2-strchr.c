#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @c: The parameter 'c' represents the character.
 * @s: the parameter "*s" represents the string.
 * Return: returns "NULL" if not found / and locat if found.
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
