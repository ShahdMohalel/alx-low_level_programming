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
int coins[5] = {25, 10, 5, 2, 1};
int i;
int num;
int count = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
if (num == 0 || num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
while (num >= coins[i])
{
num -= coins[i];
count++;
}
}
printf("%d\n", count);
return (0);
}
