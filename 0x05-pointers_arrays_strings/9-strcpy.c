#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: The parameter "*dest" represents destination of copy
 * @src: The parameter "*src" represents source of copy
 * Return: returns the pointer "dest".
*/
char *_strcpy(char *dest, char *src)
{
char *dest_start;
*dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}
