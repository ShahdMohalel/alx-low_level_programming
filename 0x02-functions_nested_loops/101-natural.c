#include<stdio.h>
#include "main.h"
/**
 * main - printf("%d\n", sum)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
