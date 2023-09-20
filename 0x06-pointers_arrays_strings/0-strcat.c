#include "main.h"
/**
 * _strcat - concatinate strings
 * @dest: The parameter "dest" represents the strings
 * @src: The parameter "src" represents the strings
 * Return: returns the "concat" concatenated string.
*/
char *_strcat(char *dest, char *src)
{
int src_count = 0;
int dest_count = 0;
int i;
int concat_size;
char *concat;
for (i = 0; src[i] != '\0'; i++)
{
src_count++;
}
for (i = 0; dest[i] != '\0'; i++)
{
dest_count++;
}
concat_size = src_count + dest_count;
concat = (char *)malloc((concat_size + 1) * sizeof(char));
for (i = 0; i < dest_count; i++)
{
concat[i] = dest[i];
}
for (i = 0; i < src_count; i++)
{
concat[dest_count + i] = src[i];
}
return (concat);
}
