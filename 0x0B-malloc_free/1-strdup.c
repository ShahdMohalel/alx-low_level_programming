#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: The parameter "str" represents the string.
 * Return: new_str.
*/
char *_strdup(char *str)
{
char *duplicate;
if (str == NULL) {
        return NULL;
    }
duplicate = (char *)malloc(strlen(str) + 1);

    if (duplicate == NULL) {
        return NULL;
    }

    strcpy(duplicate, str);

    return duplicate;
}
