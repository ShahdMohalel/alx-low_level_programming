#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
str = malloc(strlen(s1) + n + 1);
strcpy(str, s1);
strncat(str, s2, n);
if(str == NULL)
{
return NULL;
}
return str;
}
