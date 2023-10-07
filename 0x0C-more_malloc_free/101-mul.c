#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - mul.
 * @argc: command count.
 * @argv: command array.
 * Return: 0 always
*/
int main(int argc, char **argv)
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1*num2;
printf("%d\n", result);
return (0);
}
