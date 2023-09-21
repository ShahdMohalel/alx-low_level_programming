#include "main.h"
/**
 * leet - encodes a string.
 * @le: The parameter "*le" represents the string.
 * Return: returns encoded string.
*/
char *leet(char *le)
{
char sletters[] = {'a', 'e', 'o', 't', 'l'};
char cletters[] = {'A', 'E', 'O', 'T', 'L'};
char numbers[] = {'4', '3', '0', '7', '1'};
int i;
int j;
int count = 0;
for (i = 0; le[i] != '\0'; i++)
{
count++;
}
for (i = 0; i < count; i++)
{
for (j = 0; j < 5; j++)
{
if (le[i] == sletters[j] || le[i] == cletters[j])
{
le[i] = numbers[j];
}
}
}
return (le);
}
