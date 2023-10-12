#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print.
 * @format: The parameter is the typr of argu.
 * Return: no return.
*/
void print_all(const char * const format, ...)
{
va_list ptr;
int i;
va_start(ptr, format);
if (format == NULL && *format == '\0')
{
return;
}
i = 0;
while (format[i] != '\0')
{
switch (format[i])
{
case 'i':
printf("%d, ", va_arg(ptr, int));
break;
case 'f':
printf("%f, ", va_arg(ptr, double));
break;
case 's':
printf("%s", va_arg(ptr, char *));
break;
case 'c':
printf("%c, ", va_arg(ptr, int));
default:
break;
}
i++;
}
va_end(ptr);
printf("\n");
}
