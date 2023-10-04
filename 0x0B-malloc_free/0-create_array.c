#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @c: The parameter 'c' represents the character.
 * @size: The parameter "size" represents the size of the array.
 * Return: pointer to ar.
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
if (size == 0)
{
return (NULL);
}
ar = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
