#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: The parameter "str" represents the string.
 * Return: new_str.
*/
char *_strdup(char *str)
{
int i;
char *new_str;
int count = 0;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
new_str = malloc(count *sizeof(char));
strcpy(new_str, str);
if (new_str == NULL)
{
return (NULL);
}
return (new_str);
}
