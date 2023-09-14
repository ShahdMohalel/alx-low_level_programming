#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
int i;
int arr[3];
arr[0] = a;
arr[1] = b;
arr[2] = c;
for (i = 1; i < 3; i++)
{
if (arr[0] < arr[i])
{
arr[0] = arr[i];
}
}
largest = arr[0];
return (largest);
}

