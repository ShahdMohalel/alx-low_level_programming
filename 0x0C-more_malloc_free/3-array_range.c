#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - array range
 * @min: The parameter represents the min.
 * @max: max number.
 * Return: return array of numbers.
*/
int *array_range(int min, int max)
{
int *array;
int elements;
int i;
if (min > max)
{
return (NULL);
}
elements = max - min + 1;
if ((elements) * (sizeof(int)) >= INT_MAX)
{
return (NULL);
}
array = malloc((elements) * (sizeof(int)));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < elements ; i++)
{
array[i] = min + i;
}
return (array);
}
