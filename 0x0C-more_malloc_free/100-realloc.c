#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "main.h"
/**
 * _realloc - reallocate memory.
 * @ptr: The pointer.
 * @old_size: the size of ptr.
 * @new_size: the size of the new pointer.
 * Return: the new pointer.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL && new_size != 0)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
return (new_ptr);
}
if (new_size > old_size)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
strcpy(new_ptr, ptr);
free(ptr);
return (new_ptr);
}
else if (old_size > new_size)
{
new_ptr = malloc(new_size);
if(new_ptr == NULL)
{
return (NULL);
}
strncpy(new_ptr, ptr, new_size);
free(ptr);
return (new_ptr);
}
else
{
return (ptr);
}
return (NULL);
}
