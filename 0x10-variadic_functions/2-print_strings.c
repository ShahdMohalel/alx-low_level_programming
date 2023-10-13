#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - print strings
 * @n: The parameter 'n' represents the number of strings
 * @separator: separate.
 * Return: no return.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
str = va_arg(ptr, char*);
if (str != NULL && *str != '\0')
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL && separator[0] != '\0')
{
printf("%s", separator);
}
}
va_end(ptr);
printf("\n");
}
