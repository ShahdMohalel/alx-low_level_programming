#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name.
 * @argc: command count.
 * @argv: command array.
 * Return: 0 always
*/
int main(int argc, char *argv[])
{
int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
