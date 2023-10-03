#include "main.h"
#include <stdio.h>
/**
 * main - print program name.
 * @argc: command count.
 * @argv: command array.
 * Return: 0 always
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
