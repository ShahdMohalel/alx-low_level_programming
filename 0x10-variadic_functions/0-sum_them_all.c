#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments.
 * @n: The parameter 'n' represents the number.
 * Return: the sum.
*/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int i;
if (n == 0)
{
return (0);
}
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
