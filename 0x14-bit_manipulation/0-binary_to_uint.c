#include <main.h>
/**
 * binary_to_uint - convert binary
 * @b: pointer to the struct
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
if (b == NULL)
return 0;
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);        
n = (n << 1) + (b[i] - '0');
}
return (n);
}
