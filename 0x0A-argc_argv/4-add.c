#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print program name.
 * @argc: command count.
 * @argv: command array.
 * Return: 0 always
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int flag;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
if (argc == 1)
{
for (i = 1; i < argc; i++)
{
flag = isalnum(argv[i]);
if (flag == 0)
{
printf("Error\n");
return (1);
}
}
}
return (0);
}
