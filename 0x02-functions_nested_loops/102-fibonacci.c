#include<stdio.h>
#include "main.h"
/**
 * main - printf("%d, ", Fibonacci[i])
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
int Fibonacci[50];
for (i = 1; i < 50; i++)
{
Fibonacci[i] = i + (i - 1);
printf("%d, ", Fibonacci[i]);
}
return (0);
}
