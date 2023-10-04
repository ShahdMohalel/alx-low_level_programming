#include "main.h"
#include <stdlib.h>
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
for (i = 0; i < count; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
