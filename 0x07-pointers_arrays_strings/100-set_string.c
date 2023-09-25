#include"main.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: The parameter "*s" represents the pointer of pointers.
 * @to: The parameter "*to" represents the string.
 * Return: no return.
*/
void set_string(char **s, char *to)
{
*s = (char *)malloc((strlen(to) + 1) * sizeof(char));
strcpy(*s, to);
}
