#include<stdio.h>
#include "main.h"
/**
 * main - printf("%lu\n",even_sum)
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
unsigned long int fib[50];
unsigned long even_sum;
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
if (fib[i] >= 4000000)
{
break;
}
}
for (i = 0; i < 50; i++)
{
if (fib[i] % 2 == 0)
{
even_sum += fib[i];
}
}
printf("%lu\n", even_sum);
return (0);
}
