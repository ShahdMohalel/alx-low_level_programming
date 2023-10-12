#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - print numbers.
 * @n: The parameter 'n' represents the number of integrs
 * @separator: the ,
 * Return: no return.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ptr, int));
if (i <= n - 1 && *separator != '\0')
{
printf("%s ", separator);
}
}
printf("\n");
}