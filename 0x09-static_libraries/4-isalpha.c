#include<stdio.h>
#include "main.h"
/**
 * _isalpha - check if character is an alphabetic character
 * @c: The parameter 'c' represents ASCII number of an alphabetic character
 * Return: 1 if true / 0 if false
*/
int _isalpha(int c)
{
if ((c <= 122 && 97 <= c) || (c <= 90 && 65 <= c))
{
return (1);
}
else
{
return (0);
}
}
