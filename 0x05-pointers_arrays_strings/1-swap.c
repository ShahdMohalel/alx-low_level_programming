#include "main.h"
/**
 * swap_int - swap two numbers.
 * @a: The parameter "*a" represents the number to be swaped
 * @b: The parameter "*b" represents the number to be swaped
 * Return: no return
*/
void swap_int(int *a, int *b)
{
a = &b;
b = &a;
return;
}
