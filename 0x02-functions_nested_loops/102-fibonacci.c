#include<stdio.h>
#include "main.h"
/**
 * main - printf("%d, ", Fibonacci[i])
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
long long int fib[50];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 50; i++)
{
if (i < 49)
{
printf("%d, ", fib[i]);
}
else
{
printf("%d", fib[i]);
}
}
return (0);
}