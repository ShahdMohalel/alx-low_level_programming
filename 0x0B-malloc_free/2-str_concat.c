#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: The parameter "str" represents the string.
 * Return: new_str.
*/
char *str_concat(char *s1, char *s2)
{
char *duplicate;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(strlen(s2) + strlen(s1) + 1);
if (duplicate == NULL)
{
return (NULL);
}
duplicate = strcat(s1, s2);
return (duplicate);
}
