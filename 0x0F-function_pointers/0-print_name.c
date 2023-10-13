#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name.
 * @name: name.
 * @f:pointer to a function.
 * Return: no return.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
