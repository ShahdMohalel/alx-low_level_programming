#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void *malloc_checked(unsigned int b)
{
void *arr;
if (b >= INT_MAX)
{
exit(98);
}
arr = malloc(b);
if (arr == NULL)
{
exit(98);
}
return (arr);
}
