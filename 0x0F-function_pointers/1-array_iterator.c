#include <stdlib.h>
/**
 * array_iterator - action on array
 * @array: The array.
 * @size: array size.
 * @action: function pointer.
 * Return: 1 if true / 0 if false
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
