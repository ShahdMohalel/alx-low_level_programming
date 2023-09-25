#include "main.h"
/**
 * _memcpy - copies memory area.
 * @n: The parameter 'n' represents the number of bytes.
 * @src: the array "*src" to copy from.
 * @dest: the array "*dest" to copy into.
 * Return: returns the "dest".
*/
char *_memcpy(char *dest, char *src, unsigned int n){
int i;
for(i = 0; i < (int)n; i++)
{
dest[i] = src[i];
}
return (dest);
}
