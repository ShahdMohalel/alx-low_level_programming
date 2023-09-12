#include<stdio.h>
#include "main.h"
/**
 * _islower -check if character is a lowercase
 * int: c
 * Return: 1 if true _ 0 if false
*/
int _islower(int c)
{
if (c <= 122 && 97 <= c)
{
return (1);
}
else
{
return (0);
}
}
