#include <stdio.h>
#include "main.h"
#include <limits.h>
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
if (nmemb * size >= INT_MAX)
{
return (NULL);
}
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size) 
return (ptr);
}
