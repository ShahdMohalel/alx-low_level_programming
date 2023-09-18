#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: The parameter "*dest" represents destination of copy
 * @src: The parameter "*src" represents source of copy
 * Return: returns the pointer "dest"
*/
char *_strcpy(char *dest, char *src)
{
int i;
int count = 0;
for (i = 0; src[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
dest[i] = src[i];
}
return (dest);
}
