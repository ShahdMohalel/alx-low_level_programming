#include <stdio.h>
/**
 * print_name - prints name.
 * @name: name.
 * @f:pointer to a function.
 * Return: no return.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == '\0')
{
return;
}
(*f)(name);
}
