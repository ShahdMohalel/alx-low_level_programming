#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
int *arr;
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
