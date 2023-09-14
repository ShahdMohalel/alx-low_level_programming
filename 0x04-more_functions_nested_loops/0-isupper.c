#include<stdio.h>
#include "main.h"
/**
 *_isupper - check if upper case
 * @c: The parameter 'c' represents the number to be checked
 * Return: 1 if true / 0 if false
*/
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
