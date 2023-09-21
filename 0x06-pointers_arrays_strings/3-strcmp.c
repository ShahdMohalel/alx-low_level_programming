#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: The parameter "*s1" represents the first string.
 * @s2: The parameter "*s2" represents the second string.
 * Return: returns '0' if equal "0 < " or "0 > ".
*/
int _strcmp(char *s1, char *s2)
{
int i;
int count1 = 0;
int count2 = 0;
int count = 0;
int result;
for (i = 0; s1[i] != '\0'; i++)
{
count1++;
}

for (i = 0; s2[i] != '\0'; i++)
{
count2++;
}

if (count1 > count2)
{
count = count1;
}
else
{
count = count2;
}
for (i = 0; i < count; i++)
{
result = s1[i] - s2[i];
if (result != 0)
{
break;
}
}
return (result);
}
