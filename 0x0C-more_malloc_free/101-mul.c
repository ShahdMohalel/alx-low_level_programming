#include <stdio.h>
#include "main.h"
int main(int argc, char argv[])
{
int num1;
int num2;
int result;
if (argc != 2)
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
