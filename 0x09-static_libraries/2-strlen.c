#include "main.h"
#include <stddef.h>
/**
 * _strlen - return the length of string
 * @s: The parameter "*s" represents the string
 * Return: "len" return thr length
*/
int _strlen(char *s)
{
int i;
int count = 0;
int length = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
length++;
}
return (length);
}
