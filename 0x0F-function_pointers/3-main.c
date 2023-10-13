#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
int num1;
int num2;
int re;
int (*result)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
{
printf("Error\n");
exit(99);
}
if (argv[3][0] == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
result = get_op_func(argv[2]);
re = result(num1, num2);
printf("%d\n", re);
return (0);
}
