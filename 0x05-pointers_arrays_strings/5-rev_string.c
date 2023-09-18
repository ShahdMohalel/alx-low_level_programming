#include "main.h"
/**
 * rev_string - reverese string
 * @s: The parameter "*s" represents the string
 * Return: no return
*/
void rev_string(char *s)
{
int i;
int count = 0;
int index;
char temp;
for (i = 0; str[i] != '\0'; i++)
{
count++;
}
index = count - 1;
for (i = 0; i < count / 2; i++)
{
temp = str[i];
str[i] = str[count - i - 1];
str[count - i - 1] = temp;
}
}
