#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - return last didgit if a number
 * @e: The parameter 'e' represents the number
 * Return: (e % 10)
*/
int print_last_digit(int e)
{
int end;
if (e < 0)
{
end = e % 10;
end = end / -1;
}
else
{
end = e % 10;
}
return (end);
}
