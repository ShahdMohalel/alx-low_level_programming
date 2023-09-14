#include<stdio.h>
#include "main.h"
/**
 * positive_or_negative - printf "is positive, is negative, is zero"
 * @i: parameter 'i' represents the number
 * Return: no return
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
