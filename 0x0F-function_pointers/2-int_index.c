#include <stdlib.h>
/**
 * int_index - check
 * @array: The array.
 * @size: array size.
 * @cmp: compare array.
 * Return: the index.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int run;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
run = cmp(array[i]);
if (run != 0)
{
return (i);
}
else
{
continue;
}
}
}
return (-1);
}
