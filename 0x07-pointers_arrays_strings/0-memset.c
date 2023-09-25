#include "main.h"
/**
 * memset - fills memory with a constant byte.
 * @n: The parameter 'n' represents the number to of bytes.
 * @b: The parameter 'b' represents the character.
 * @s: The parameter "*s" represents the pointer to the mem.
 * Return: returns the 's'.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
}
return (s);
}
