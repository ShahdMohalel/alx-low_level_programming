#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - creat an array.
 * @nmemb: The parameter 'n' represents the number to of elements.
 * @size: the size of the array.
 * Return: the array.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
ptr[i] = 0;
}
return (ptr);
}
