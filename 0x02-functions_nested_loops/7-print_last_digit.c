#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - return last didgit if a number
 * @e: The parameter 'e' represents the number
 * Return: (e % 10)
*/
int print_last_digit(int e)
{
int end;
end = e % 10;
char last;
last = '0' + end;
putchar(last);
putchar('\n');
return (end);
}
