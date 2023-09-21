#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @L: The parameter "*L" represents the array of strings.
 * Return: the upper case string.
*/

char *string_toupper(char *L)
{
int i;
int count = 0;
char A;
for (i = 0; L[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
if (L[i] >= 65 && L[i] <= 90)
{
continue;
}
for (A = 'A'; A <= 'Z'; A++)
{
if (L[i] - A == 32)
{
L[i] = A;
}
else
{
continue;
}
}
}
return (L);
}
