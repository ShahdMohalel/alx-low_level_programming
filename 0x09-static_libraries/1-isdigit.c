#include<stdio.h>
#include "main.h"
/**
 * _isdigit - check if between '0' and '1'
 * @c: The parameter 'c' represents the number to be checked
 * Return: 1 if true / 0 if false
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
