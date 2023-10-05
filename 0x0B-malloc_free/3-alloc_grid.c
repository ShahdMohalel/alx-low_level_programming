#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocaye grid
 * @width: The parameter "width" represents the width
 * @height: the parameter "height" represents the height.
 * Return: the 2D array
*/
int **alloc_grid(int width, int height)
{
int **array;
int i, j;
if (width == 0 || height == 0)
{
return (NULL);
}
array = (int **)malloc(width * sizeof(int *));
for (i = 0; i < width; i++)
{
array[i] = (int *)malloc(height * sizeof(int));
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
if (array == NULL)
{
return (NULL);
}
return (array);
}
