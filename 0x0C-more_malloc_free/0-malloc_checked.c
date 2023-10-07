#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
long unsigned int max_memory;
int *arr;
max_memory = (1024 * 1024 * 1024);
if (sizeof(b) > 2 *  max_memory)
{
exit(98);
}
arr = malloc(sizeof(b));

if(arr == NULL)
{
exit(98);
}
if(b == INT_MAX)
{
exit(98);
}
return (arr);
}
